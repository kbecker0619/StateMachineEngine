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
#include <stdio.h>

// ----	Project Headers -------------------------
#include "cwsw_lib.h"
#include "cwsw_arch.h"
#include "cwsw_eventsim.h"

// ----	Module Headers --------------------------
#include "cwsw_board.h"


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================

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
#define GET_SetEventSeen()			!(!(seteventseen))
#define SET_SetEventSeen(val)		do { seteventseen = (val); } while(0)
static bool seteventseen = false;

// ==== /Targets for Get/Set APIs =========================================== }


// ============================================================================
// ----	Private Prototypes ----------------------------------------------------
// ============================================================================

static void
SimulateInputs__Task(void)
{
	/* my scheme for debouncing is to "shift in" a new sample; when there are 1 full byte's worth of
	 * bits that are the same, that value is taken.
	 * each button-press sample is 32 bits, but in this UT, we stop processing as soon as we have
	 * a valid sample.
	 * because, in this UT environ, there is no time base and i am directly single-stepping through
	 * the code, i'm not terribly worried about other than happy-path button processing. in my
	 * original vision, i would expect this task to be called at approximately a 1-ms rate, such
	 * that a valid sample could be had in as little as 8 ms.
	 */

	static uint8_t button_1[] = {
	/*   01234567012345670123456701234567 */
		"01010011111110000001111100000001",		/* 1st button press input data: no valid button press */
	};

	static int b1row  = TABLE_SIZE(button_1);	/* which button press sequence are we inspecting? */
	static int b1samp = strlen(button_1[0]);	/* which sample are we processing? */
	static uint8_t accumulator_count = CHAR_BITS;

	UNUSED(b1row);

}
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
//		bool a = GET(activity1ind);
//		SET(BspHeartbeatInd, a);		/* Cwsw_Bsp__Set_BspActivity2() */
//		SET(BspActivity2, GET(activity2ind));
//		SET(BspActivity3, GET(activity3ind));
//		SET(SetEventSeen, false);
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
	while(!terminate_requested) { Task(board_ut); }	/* board_ut__Task() */
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
EventHandler__evNotInitialized(tEventPayload EventData)
{
	UNUSED(EventData);
	terminate_requested = false;
}
