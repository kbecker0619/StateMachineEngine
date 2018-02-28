/** @file cwsw_dio_test_task1ms.c
 *	@brief	One-sentence short description of file.
 *
 *	Description:
 *
 *	Copyright (c) 2018 Kevin L. Becker. All rights reserved.
 *
 *	Original:
 *	Created on: Feb 25, 2018
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
#include <string.h>		/* strlen(), size_t */
#include <ctype.h>		/* iswhite() */
#include <limits.h>		/* CHAR_BITS */

// ----	Project Headers -------------------------
#include "cwsw_lib.h"
#include "cwsw_board.h"
#include "cwsw_eventsim.h"

// ----	Module Headers --------------------------


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================

/** Establish app-specific aliased names for buttons provided by Board component.
 */
enum eButtons {
	kButton1 = kBrdSwitch1,
	kButton2 = kBrdSwitch2,
	kButton3 = kBrdSwitch3,
	kNumButtons = kBrdNumSwitches
};


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

typedef enum eButtons				tButtons;

typedef struct sButtonEvent {
	bool				ButtonEventSeen;
	tButtons			WhichButton;
	tDO_LogicalValues	NewValue;
} tButtonEvent;


// ============================================================================
// ----	Global Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Module-level Variables ------------------------------------------------
// ============================================================================

static tButtonEvent tbe = {0};


// ============================================================================
// ----	Private Prototypes ----------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Functions ------------------------------------------------------
// ============================================================================

void
EventHandler__evButtonPressed		(tEventPayload EventData)
{
	cwsw_assert(!tbe.ButtonEventSeen, "Previous button event not yet purged");
	tbe.ButtonEventSeen = true;
	tbe.WhichButton = EventData.evId;
	tbe.NewValue = !!EventData.evInt;
}

#if (XPRJ_Debug_Win_MinGW) || (XPRJ_Debug_Linux_GCC)		/* { */
#define SimulateButtonInputs__Task()	SimulateButtonInputs()
/** Simulate button input events.
 *	This function ONLY useful for and only active in environments that are not
 *	connected to a physical board.
 *
 *	This version simulates only digital inputs; specifically, button presses.
 *
 *	My scheme for debouncing is to "shift in" a new sample; when there are 1
 *	full byte's worth of bits that are the same, that value is taken.
 *
 *	In order to separate the DI activity from the task(s) that manage the DI
 *	activity, and also, to allow "easy" variations such as a LabWindows/CVI UI
 *	front-end, this function posts a CWSW event as soon as it sees a debounced
 *	state change.
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
void
SimulateButtonInputs(void)
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
	static int button_row = TABLE_SIZE(button_samples);	/* which button press sequence are we inspecting? start w/ end of table */

	for( ; button_row--; )	/* loop through all buttons, from high to low. note this algorithm stops
							 * the loop on this iteration as soon as we recognize a button event,
							 * but we pick it up from the next button on the next iteration. at the
							 * bottom of the loop, after we fall out, we reset the row counter.
							 */
	{
		if(!button_sample_idx[button_row])												/* if we have run out of button event data ... */
		{
			static int loop_ct_until_terminate = 2;
			button_sample_idx[button_row] = strlen(button_samples[button_row]);			/* ... reset sample index */
			if( (!button_row) && (!--loop_ct_until_terminate) )
			{
				/* suggested: post an event here that says, "i'm out of inputs" */
				tEventPayload ev = {0};
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
					tEventPayload ev;

					/* set last recognized value 1st, as convenience (so i can use it next) */
					last_switch_value[button_row] = (LSB_16(accumulator[button_row]) == 0xFFU);

					/* post event */
					ev.evId = TO_U16(button_row);				/* which button has the event? for common handler */
					ev.evInt = last_switch_value[button_row];
					PostEvent(evButtonPressed, ev);
				}

				/* always reset bit accum count for next button event, even if the current recognized
				 * button state is the same as the last one. in other words, once a valid button
				 * event is recognized, begin accumulating samples on an empty accumulator.
				 */
				accumulator_count[button_row] = CHAR_BIT;
				return;											/* early exit, intentionally don't process other inputs */
			}
		}
	}
	button_row = TABLE_SIZE(button_samples);
	return;
}

#else
#define SimulateButtonInputs__Task()	do {} while(0)


#endif		/* } */

bool
GET_ButtonEvent(void)
{
	bool be;
	Task(SimulateButtonInputs);

	be = tbe.ButtonEventSeen;
	if(be)
	{
		tbe.ButtonEventSeen = false;
	}
	return be;
}

#define GET_WhichButton()	(tbe.WhichButton)
#define GET_ButtonState()	(tbe.NewValue)

/** 1-ms task for DIO Demonstration Project.
 *	If this looks strangely familiar, it's probably because I'm stealing the appropriate UT code
 *	from the Board component.
 */
void
ms1__Task(void)
{
	bool btnev = GET(ButtonEvent);
	if(!btnev)
	{
		return;
	}

	switch(GET(WhichButton))
	{
	case kButton1:
		if(GET(ButtonState)) { SET(kBoardLed1, kLogicalOn); } else { SET(kBoardLed1, kLogicalOff); }
		break;
	case kButton2:
		if(GET(ButtonState)) { SET(kBoardLed2, kLogicalOn); } else { SET(kBoardLed2, kLogicalOff); }
		break;
	case kButton3:
		if(GET(ButtonState)) { SET(kBoardLed3, kLogicalOn); } else { SET(kBoardLed3, kLogicalOff); }
		break;
	default:
		break;
	}
}
