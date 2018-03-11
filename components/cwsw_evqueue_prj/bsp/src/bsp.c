/** @file
 *	@brief	Board Support Package.
 *
 *	Description:
 *	In the Beckersoft ecosystem, the BSP is generic yet application-specific, and sits between the
 *	any component or module that needs board services (e.g., application components), and the
 *	actual board itself, which is generic for any project that utilizes a specific board.
 *
 *	this module knows how the various attributes of the board are connected together to fulfill the
 *	functionality of this app, and (may) expose functionality APIs rather than raw board-related
 *	APIs. we would normally expect this module to talk only to the board module, though i suppose
 *	in the abstract, an occasional skipping right to the arch might be in order.
 *
 *	Copyright (c) 2018 Kevin L. Becker. All rights reserved.
 *
 *	Original:
 *	Created on: Dec 21, 2017
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
#include <stdint.h>
#include <stdbool.h>

// ----	Project Headers -------------------------
#include "cwsw_lib.h"			/* foundational, cwsw-common stuff */
#include "cwsw_eventsim.h"

//#include "cwsw_arch.h" 		/* which MCU are we using? should be set by command-line include paths */
//#include "cwsw_board.h" 		/* which board are we using? each board is built upon a specific MCU. path to this folder should be set by command-line include paths */
//#include "cwsw_clock.h"

// ----	Module Headers --------------------------
#include "bsp.h"				/* how are we using this board? yes, conceptually, a bsp could support multiple boards and/or MCUs, but that's not where we are at this moment. this file will be project-specific */
#include "cwsw_evqueue.h"


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
static char const * const cwsw_bsp_RevString = "$Revision: 0123 $";

static bool initialized = false;


// ============================================================================
// ----	Private Prototypes ----------------------------------------------------
// ============================================================================

/* targets for Get() and Set() macro expansions.
 * These are located here, and are designed as functions, specifically to implement a separation
 * in dependencies between users of this module and the board modules. if, for example, these were
 * implemented as FLMs (function-like macros) or inline functions located in the API, then the
 * suppliers would need compile-time access to the board. by making functions here, the users only
 * need API access to this module.
 */
#if (XPRJ_Debug_CVI)
#include "cwsw_dio_uir.h"
#endif
//void
//Cwsw_Bsp__Set_BspHeartbeatInd(tDO_LogicalValues onoff)
//{
//	Set(Cwsw_Board, kBoardLed1, onoff);
//}

//void
//Cwsw_Bsp__Set_BspActivity2(tDO_LogicalValues onoff)
//{
//	Set(Cwsw_Board, kBoardLed2, onoff);
//}

//void
//Cwsw_Bsp__Set_BspActivity3(tDO_LogicalValues onoff)
//{
//	Set(Cwsw_Board, kBoardLed3, onoff);
//}

void
Heartbeat__Task(void)
{
//	static tCwswClockTics heartbeat_timer= 0;
//
//	if(TM(heartbeat_timer))
//	{
//		tDO_LogicalValues curstate = Get(Cwsw_Board, kBoardLed1);
//		Cwsw_Timer__Set(&heartbeat_timer, 1000);
//		Set(Cwsw_Board, kBoardLed1, !curstate);
//	}
}


/** Abstracted button handler.
 *	This handler is intended to be the same, whether you're getting input from the console, from a LW/CVI panel, etc.
 * 	Within this handler, all you should do is set the flags used by the "business logic" in the task function(s).
 */
//void
//EventHandler__evButtonCommit(tNotificationPayload EventData)
//{
//	UN-USED(EventData);
	/* simply to test it out, forward to the other event handler.
	 */
//	PostEvent(evButtonPressed, EventData);
//}


// ============================================================================
// ----	Public Functions ------------------------------------------------------
// ============================================================================

/** Initialization of all things not directly related to the library under test.
 * Yes, we realize that we're misusing the name "BSP"; here, it's much more generalized than the
 * word actually refers to.
 *
 */


//!  Size of event queue for the CLSA Position Sensor state machine.
enum { CLSA_MC_SC_EVENT_SIZE = 5 };

//! Motor Controller Event Queue.
PRIVATE tEvQ_Event	 ut_evq1_evbuf[CLSA_MC_SC_EVENT_SIZE] = {0};

PRIVATE tEvQueueCtrl ut_evq1_ctrl;

uint16_t
BSP__Init(void)
{
	uint16_t rv = 0;
	UNUSED(cwsw_bsp_RevString);

	do {		// initialize dependencies
		if(!rv)	rv = Init(Cwsw_Lib);			// Cwsw_Lib__Init(). board independent, arch independent, for some environs, inits things used by following modules
	} while(0);

	do {		// test component API before initialization
		rv = Cwsw_EvQ__InitEvQ(NULL, NULL, 0);
		cwsw_assert(rv == kEvQ_Err_NotInitialized, "Queue Not Initialized");

		rv = Cwsw_EvQ__FlushEvents(NULL);
		cwsw_assert(rv == kEvQ_Err_NotInitialized, "Queue Not Initialized");

		rv = Cwsw_EvQ__PostEvent(NULL, 0);
		cwsw_assert(rv == kEvQ_Err_NotInitialized, "Queue Not Initialized");

	} while(0);

	do {		// initialize component, but not ev queue, test various API
		rv = Init(Cwsw_EvQ);			// Cwsw_EvQ__Init()
		if(!rv)
		{
			rv = Cwsw_EvQ__InitEvQ(NULL, NULL, 0);
			cwsw_assert(rv == kEvQ_Err_BadCtrl, "Bad Control Structure");

			rv = Cwsw_EvQ__InitEvQ(&ut_evq1_ctrl, NULL, 0);
			cwsw_assert(rv == kEvQ_Err_BadQueue, "Bad Queue");
			rv = Cwsw_EvQ__InitEvQ(&ut_evq1_ctrl, ut_evq1_evbuf, 0);
			cwsw_assert(rv == kEvQ_Err_BadQueue, "Bad Queue");

			rv = Cwsw_EvQ__FlushEvents(NULL);
			cwsw_assert(rv == kEvQ_Err_BadCtrl, "Bad Control Structure");
			rv = Cwsw_EvQ__FlushEvents(&ut_evq1_ctrl);
			cwsw_assert(rv == kEvQ_Err_BadQueue, "Bad Queue");

			rv = Cwsw_EvQ__PostEvent(NULL, 0);
			cwsw_assert(rv == kEvQ_Err_BadCtrl, "Bad Control Structure");
			rv = Cwsw_EvQ__PostEvent(&ut_evq1_ctrl, 0);
			cwsw_assert(rv == kEvQ_Err_BadQueue, "Bad Queue");
		}
	} while(0);

	do {		// initialize ev queue, then invalidate it and test various API with bad params
		do {	// invalidate queue size
			rv = Cwsw_EvQ__InitEvQ(&ut_evq1_ctrl, ut_evq1_evbuf, CLSA_MC_SC_EVENT_SIZE);
			cwsw_assert(rv == kEvQ_Err_NoError, "Failed Initialization");

			ut_evq1_ctrl.Queue_Size = 0;
			rv = Cwsw_EvQ__FlushEvents(&ut_evq1_ctrl);
			cwsw_assert(rv == kEvQ_Err_BadQueue, "Bad Queue");
			rv = Cwsw_EvQ__PostEvent(&ut_evq1_ctrl, 0);
			cwsw_assert(rv == kEvQ_Err_BadQueue, "Bad Queue");
		} while(0);

		do {	// invalidate write pointer
			rv = Cwsw_EvQ__InitEvQ(&ut_evq1_ctrl, ut_evq1_evbuf, CLSA_MC_SC_EVENT_SIZE);
			cwsw_assert(rv == kEvQ_Err_NoError, "Failed Initialization");

			ut_evq1_ctrl.Write_Ptr = NULL;
			rv = Cwsw_EvQ__PostEvent(&ut_evq1_ctrl, 0);
			cwsw_assert(rv == kEvQ_Err_BadCtrl, "Bad Control Structure");

			ut_evq1_ctrl.Write_Ptr = ut_evq1_ctrl.Event_Queue_Ptr - 1;
			rv = Cwsw_EvQ__PostEvent(&ut_evq1_ctrl, 0);
			cwsw_assert(rv == kEvQ_Err_BadCtrl, "Bad Control Structure");

			// todo: not sure i want this to be the return code if the write pointer is beyond the buffer size
			ut_evq1_ctrl.Write_Ptr = ut_evq1_ctrl.Event_Queue_Ptr + ut_evq1_ctrl.Queue_Size;
			rv = Cwsw_EvQ__PostEvent(&ut_evq1_ctrl, 0);
			cwsw_assert(rv == kEvQ_Err_QueueFull, "Event Queue Full");

			rv = Cwsw_EvQ__FlushEvents(&ut_evq1_ctrl);		// resets write pointer, so there should be no problem upon return
			cwsw_assert(rv == kEvQ_Err_NoError, "Failed Initialization");
		} while(0);
	} while(0);

	// correctly initialize ev q, then get on w/ life.
	rv = Cwsw_EvQ__InitEvQ(&ut_evq1_ctrl, ut_evq1_evbuf, CLSA_MC_SC_EVENT_SIZE);
	if(!rv)	initialized = true;
	return 0;
}


bool
Cwsw_Bsp__Get_Initialized(void)
{
	return initialized;
}

void
Evq_Ut__Task(void)
{
	tEvQ_ErrorCodes rv;

	do {		// fill up queue, check response
		rv = Cwsw_EvQ__PostEvent(&ut_evq1_ctrl, 0);
		cwsw_assert(rv == kEvQ_Err_BadEvent, "Bad Event");

		rv = Cwsw_EvQ__PostEvent(&ut_evq1_ctrl, 256);	// ALLOW THE COMPILER WARNING HERE
		cwsw_assert(rv == kEvQ_Err_BadEvent, "Bad Event");

		rv = Cwsw_EvQ__PostEvent(&ut_evq1_ctrl, 1);
		cwsw_assert(rv == kEvQ_Err_NoError, "");

		rv = Cwsw_EvQ__PostEvent(&ut_evq1_ctrl, 2);
		cwsw_assert(rv == kEvQ_Err_NoError, "");

		rv = Cwsw_EvQ__PostEvent(&ut_evq1_ctrl, 3);
		cwsw_assert(rv == kEvQ_Err_NoError, "");

		rv = Cwsw_EvQ__PostEvent(&ut_evq1_ctrl, 4);
		cwsw_assert(rv == kEvQ_Err_NoError, "");

		rv = Cwsw_EvQ__PostEvent(&ut_evq1_ctrl, 5);
		cwsw_assert(rv == kEvQ_Err_NoError, "");

		rv = Cwsw_EvQ__PostEvent(&ut_evq1_ctrl, 6);
		cwsw_assert(rv == kEvQ_Err_QueueFull, "Queue Full");
	} while(0);

	do {		// extract & push events

	} while(0);
}
