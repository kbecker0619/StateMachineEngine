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
void
EventHandler__evButtonCommit(tEventPayload EventData)
{
	UNUSED(EventData);
	/* simply to test it out, forward to the other event handler.
	 */
//	PostEvent(evButtonPressed, EventData);
}


// ============================================================================
// ----	Public Functions ------------------------------------------------------
// ============================================================================

/** Initialization of all things not directly related to the library under test.
 * Yes, we realize that we're misusing the name "BSP"; here, it's much more generalized than the
 * word actually refers to.
 *
 * For the structure of this, since we're developing it as we try to get a generalized architecture
 * that "works" with Linux and Windows apps compiled w/ GCC; the Microchip Harmony; Atmel ASF;
 * IAR StarterKit SR730-SK; NXP Calypso, and AUTOSAR, we're taking the general structure and order
 * of things from the Harmony framework, and then morphing as appropriate.
 *
 * @return
 */


//!  Size of event queue for the CLSA Position Sensor state machine.
enum { CLSA_PS_SC_EVENT_SIZE = 5 };

/**
 * Event queue for the CLSA state machines.
 * In the Unit Test environment, there are guards on either side to address a concern about the State Engine's
 * Post-Event functionality. We need data to prove or disprove the existence of a buffer-bounds violation.
 */
typedef struct {
#if defined(UT_ENVIRONMENT)
    unsigned short  lowguard;
#endif
    tEvQ_Event      event_queue[CLSA_PS_SC_EVENT_SIZE];
#if defined(UT_ENVIRONMENT)
    unsigned short  higuard;
#endif
} tEventQueueContainer;

#if defined(UT_ENVIRONMENT)
#define EVENT_QUEUE_DEFAULT     {0xDead, {(tEvQ_Event)0U}, 0xBeef}
#else
#define EVENT_QUEUE_DEFAULT     {{(tEvQ_Event)0U}}
#endif

//! Motor Controller Event Queue.
PRIVATE tEventQueueContainer    Mc_Event_Queue = EVENT_QUEUE_DEFAULT;


uint16_t
BSP__Init(void)
{
	uint16_t rv = 0;
	UNUSED(cwsw_bsp_RevString);

	if(!rv)	rv = Init(Cwsw_Lib);				/* Cwsw_Lib__Init(). board independent, arch independent, for some environs, inits things used by following modules */
	if(!rv)	rv = Init(Cwsw_EvQueue);			// Cwsw_EvQ__Init()
	if(!rv)	rv = Cwsw_EvQ__FlushEvents(NULL);
	cwsw_assert(rv == 1, "Invalid Flush Event Return Code");

	if(rv)
	{
	    CT_ASSERT(CLSA_PS_SC_EVENT_SIZE == TABLE_SIZE(Mc_Event_Queue.event_queue));
	    Mc_Sm_Control.Queue_Size     	= CLSA_MC_SC_EVENT_SIZE;
		Mc_Sm_Control.Event_Queue_Ptr 	= Mc_Event_Queue.event_queue;
	    Mc_Sm_Control.Queue_Size     	= CLSA_MC_SC_EVENT_SIZE;

	    everything is broken

	    STATE_MACHINE_INITIALIZE(Mc_Sm_Control);		// Start the state machine

	}
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

}
