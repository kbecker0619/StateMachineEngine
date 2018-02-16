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


// ============================================================================
// ----	Private Prototypes ----------------------------------------------------
// ============================================================================

void
board_ut__Task(void)
{
//	if(GET(SetEventSeen))
//	{
//		bool a = GET(activity1ind);
//		SET(BspHeartbeatInd, a);		/* Cwsw_Bsp__Set_BspActivity2() */
//		SET(BspActivity2, GET(activity2ind));
//		SET(BspActivity3, GET(activity3ind));
//		SET(SetEventSeen, false);
//	}
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
