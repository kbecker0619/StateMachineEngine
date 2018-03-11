/** @file
 *	@brief	One-sentence short description of file.
 *
 *	Description:
 *
 *	Copyright (c) 2018 Kevin L. Becker. All rights reserved.
 *
 *	Original:
 *	Created on: Jan 27, 2018
 *	Author: kbecker
 *
 *	Current:
 *	$Revision: $
 *	$Date: $
 */

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

#include "projcfg.h"

// ----	System Headers --------------------------
#include <stdbool.h>	/* true, false */
#include <stdint.h>
#include <limits.h>		/* CHAR_BITS */
#include <ctype.h>		/* iswhite() */
#include <string.h>		/* strlen(), size_t */

// ----	Project Headers -------------------------
#include "cwsw_lib.h"
#include "cwsw_arch.h"
#include "cwsw_eventsim.h"

// ----	Module Headers --------------------------
#include "cwsw_board.h"


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================

/** Establish app-specific aliased names for buttons provided by Board component.
 */
enum eButtons { kButton1, kButton2, kButton3, kNumButtons };
enum eEventDataTypes { kButtonPressEvent };


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Global Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Module-level Variables ------------------------------------------------
// ============================================================================
static char const * const cwsw_arch_test_RevString = "$Revision: 0123 $";

static bool terminate_requested = true;

// ==== Targets for Get/Set APIs ============================================ {
// ----	EventSeen API -------------------------------------------------- {
static bool seteventseen = false;
/** Set the EventSeen flag.
 *	In this stupid-simple design, the board-level drivers communicate with the
 *	higher code by sending events, but the main loop needs to know when to
 *	handle the events. This macro sets the "EventSeen" flag to let the main
 *	loop know it has to launch some worker functions to act on the event.
 *	@note In this design, there isn't an event-seen "stack" - we handle one
 *	event at a time. So, for example, in this unit test, because the simulated-
 *	inputs DI task processes all buttons within the same iteration, if there
 *	are multiple button events in the same loop, only the last one posted will
 *	be "remembered."
 */
#define GET_SetEventSeen()			!(!(seteventseen))

/** Get the status of the EventSeen flag.
 *
 */
#define SET_SetEventSeen(val)		do { seteventseen = (val); } while(0)

/** event data for EventSeen tracking.
 *	admittedly a stupid implementation, but it's good enough for this level of
 *	dev / unit testing. very much not thread safe, very much fragile.
 * @param ev
 */
static struct sEventData {
	uint8_t EventType;
	union uEventData {
		tNotificationPayload btn;
		uint8_t nothing;
	} event_data;
} event_data;
// ----	/EventSeen API ------------------------------------------------- }

// ----	LED API -------------------------------------------------------- {
/* In this UT environ, the LEDs are considered global resources, "owned" by the Board,
 * which can be set (written to) by any application-layer module.
 */
#define SET_BspHeartbeatInd(value)	Set(Cwsw_Bsp, BspHeartbeatInd, value)
#define SET_BspActivity2(value)		Set(Cwsw_Bsp, BspActivity2, value)
#define SET_BspActivity3(value)		Set(Cwsw_Bsp, BspActivity3, value)

// ----	/LED API ------------------------------------------------------- }

// ==== /Targets for Get/Set APIs =========================================== }


// ============================================================================
// ----	Private Prototypes ----------------------------------------------------
// ============================================================================

/** Event handler for button-press events (#evButtonPressed).
 *	This is on the border between UT environs that aren't hooked to a UI or an external dev board,
 *	and the portion of the lib and UT that are common across UT envs. Within this function, we
 *	simply repost the event the LW/CVI event so we can use a common event handler.
 *
 *	This can't be static storage scope because of API (which i don't want to change just to hide
 *	from public view this function for a one-off unit test)
 *	@param ev Event Data.
 *	- evId contains the ID of the button whose event is being posted.
 *	- evInt contains the button state being communicated.
 */
void
EventHandler__evButtonPressed(tNotificationPayload ev)
{
	event_data.EventType = kButtonPressEvent;
	event_data.event_data.btn.evId = ev.evId;
	switch(ev.evInt)
	{
	case 1:
		event_data.event_data.btn.evInt = evButtonCommit;
		break;
	default:
		event_data.event_data.btn.evInt = evButtonReleased;
		break;
	}
	SET(SetEventSeen, true);
}

/** Event handler for application Termination Requested events (#evTerminateRequested).
 */
void
EventHandler__evTerminateRequested(tNotificationPayload ev)
{
	UNUSED(ev);
	terminate_requested = true;
}

/** Simulate input events.
 *	This function ONLY useful for and only active in environments that are not
 *	connected to a physical board.
 *
 *	This version specifically simulates only digital inputs; specifically,
 *	button presses. The version here handles only 1 button, but i plan to
 *	add 2 more buttons "RSN" (Real Soon Now).
 *
 *	My scheme for debouncing is to "shift in" a new sample; when there are 1
 *	full byte's worth of bits that are the same, that value is taken.
 *
 *	We post an event on change; init / ambient / quiescent is considered to be
 *	logic 0 / off / open, so we won't post any notifications until the 1st
 *	recognized press.
 *
 *	The source for these button-press samples is a string defined here in this
 *	function (at the top), because i am in intimate control of this string, i
 *	can enforce the rule that says the characters in the string shall be only
 *	"0", "1", or " " characters. "0" is a logic level 0 ( in my simulation, this
 *	is off, open, quiescent, ambient), 1 is logic 1 (on, closed, energized,
 *	active, asserted) and whitespace is used for grouping bit samples.
 *
 *	Because, in this UT environ, there is no time base and i am directly single
 *	-stepping through the code, i'm not terribly worried about other than happy-
 *	path button processing. in my original vision, i would expect this task to
 *	be called at approximately a 1-ms rate, such that a valid sample could be
 *	had in as little as 8 ms.
 */
static void
SimulateInputs__Task(void)
{
	static char const * const button_samples[kNumButtons] = {
	/*   01234567 01234567 01234567 01234567 */

		"11111111 01101001"							/* button 1 data. the length of this data is what determines the terminate request */
		"11111111 1100"
		"01010011 11111000 00011111 00000001"		/* 3rd button press: no valid button press */
		"00000000"									/* 2nd button press: valid switch release */
		"11111111"									/* 1st button press: valid switch press */
		" "											/* false 1st sample to test whitespace handling */
	,
	"00000000 11111111",							/* button 2 data */
	"00000000 11111111 11111110 01111111"			/* button 3 data */
	};

	static size_t button_sample_idx[kNumButtons] = {0};	/* which sample are we processing? */
	static int accumulator_count[kNumButtons] = {0};

	/* Bit sample accumulator. Sized to hold 1 button event's worth of history */
	static uint16_t accumulator[kNumButtons] = {0};	/* this needs to be an unsigned, because C guarantees
													 * suitability for bitmaps only for unsigned types; this,
													 * however, requires some casting below because transient ops
													 * are handled as ints. the initialization here is meaningless;
													 * if it were simply declared, because it's static, the c
													 * startup code will initialize it to 0, but then the analysis
													 * tools would complain. even if you use a version of the
													 * startup code that doesn't initialize uninitialized vars to 0,
													 * even then it wouldn't be a problem, because  we don't inspect
													 * it until we've shifted in a full byte's worth of bit samples.
													 */
	static bool last_switch_value[kNumButtons] = {0};	/* for this stage of dev, i want a notification when
													 * one full sample of ambient readings has been decoded,
													 * for initialization purposes.
													 */

	int sample;
	int button_row;									/* which button press sequence are we inspecting? start w/ end of table */

	for(button_row = TABLE_SIZE(button_samples); button_row--; )
	{
		if(!button_sample_idx[button_row])												/* if we have run out of button event data ... */
		{
			static int loop_ct_until_terminate = 2;
			button_sample_idx[button_row] = strlen(button_samples[button_row]);			/* ... reset sample index */
			if( (!button_row) && (!--loop_ct_until_terminate) )
			{
				tNotificationPayload ev = {0};
				PostEvent(evTerminateRequested, ev);
			}
		}

		do {		/* acquire new bit sample */
			do {
				sample = button_samples[button_row][--button_sample_idx[button_row]];
			} while(isblank(sample) && button_sample_idx[button_row]);
			if(isblank(sample))	sample = '0';											/* if the last sample was whitespace, supply a default */
			sample -= '0';																/* convert my sample to binary, independent of character set, encoding scheme, etc. */
			accumulator[button_row] = TO_U16(accumulator[button_row] << 1U);			/* make room for the new sample. ok to push old bits off the left end */
			accumulator[button_row] = TO_U16(accumulator[button_row] | (sample & 1));	/* add in new sample */
		} while(0);

		if(--accumulator_count[button_row] < 1)	/* by design, ok to roll down past 0. if this happens, we'll
												 * simply transition into a mode where we now inspect the
												 * sample accumulator w/ each new sample, and we'll reset & exit
												 * once we get a valid switch press.
												 * The only weakness here would be if there were so many noisy
												 * samples that the accumulator rolled back to the reinit
												 * value, and, even then, it would only skip this analysis
												 * until the accumulator got back down to 0.
												 */
		{
			/* have enough samples for a valid debounced return value, so  analyze
			 */
			if( ((LSB_16(accumulator[button_row]) & 0xFF) == 0xFF) ||
				((LSB_16(accumulator[button_row]) | 0x00) == 0x00) )
			{
				if((LSB_16(accumulator[button_row]) == 0xFFU) != last_switch_value[button_row])		/* detect change in state */
				{
					tNotificationPayload ev;
					/* set last recognized value 1st, as convenience (so i can use it next) */
					last_switch_value[button_row] = (LSB_16(accumulator[button_row]) == 0xFFU);

					/* post event */
					ev.evId = TO_U16(button_row);				/* which button has the event? for common handler */
					ev.evInt = last_switch_value[button_row];
					PostEvent(evButtonPressed, ev);
				}

				/* always reset bit accum count for next button event, even if the current recognized
				 * button state is the same as the last one
				 */
				accumulator_count[button_row] = CHAR_BIT;
			}
		}
	}
}

/** Unit Test Task Function.
 *	This task is not required to be called at any frequency or period other than, "as fast as
 *	possible." It would work well if it were called on a 1-ms time base.
 */
static void
board_ut__Task(void)
{
	/* because this is a single-thread app, sans ability to be manipulated from the outside
	 * (remember, this is a UT designed to prove the basics of support, not be fancy in any way
	 * about elegant ways to solve a problem), execute here a task designed to simulate inputs
	 */
	Task(SimulateInputs);

	/* now, execute the process-inputs / reaction steps
	 */
	if(GET(SetEventSeen))
	{
		/* business logic, react to observed event
		 */
		switch(event_data.EventType)
		{
		case kButtonPressEvent:
			SET(kBoardLed1,
				(event_data.event_data.btn.evInt) == evButtonCommit ?
					kLogicalOn : kLogicalOff);
			break;

		default:
			break;
		}

//		bool a = GET(activity1ind);
//		SET(BspHeartbeatInd, a);		/* Cwsw_Bsp__Set_BspActivity2() */
//		SET(BspActivity2, GET(activity2ind));
//		SET(BspActivity3, GET(activity3ind));
		SET(SetEventSeen, false);
	}
//	Task(Heartbeat);
}


// ============================================================================
// ----	Public Functions ------------------------------------------------------
// ============================================================================

int main(void)
{
	int retcode = EXIT_SUCCESS;
	UNUSED(cwsw_arch_test_RevString);

	/* provoke a NotInit event*/
	(void)Init(Cwsw_Board);		// Cwsw_Board__Init()
	if(retcode == EXIT_SUCCESS)	retcode = Init(Cwsw_Lib);		// Cwsw_Lib__Init()
	if(retcode == EXIT_SUCCESS)	retcode = Init(Cwsw_Arch);		// Cwsw_Arch__Init()
	if(retcode == EXIT_SUCCESS)	retcode = Init(Cwsw_Board);		// Cwsw_Board__Init()

	if(retcode == EXIT_SUCCESS)	terminate_requested = false;
	while(!terminate_requested) { Task(board_ut); }				// board_ut__Task()
	return EXIT_SUCCESS;
}

/** Global handler for simulated even evNotInitialized.
 *	Because this UT environment is supremely simple, I have intimate knowledge that this event
 *	was posted because I wanted to test my error handling. Because I intentionally provoked an
 *	exception, I am here taking the unconventional step of restoring normal behavior without any
 *	other examination.
 *	@param EventData	Unused in this error handler.
 */
void
EventHandler__evNotInitialized(tNotificationPayload EventData)
{
	UNUSED(EventData);
	terminate_requested = false;
}
