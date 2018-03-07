/** @file
 *	@brief	One-sentence short description of file.
 *
 *	Description:
 *
 *	Copyright (c) 2018 Kevin L. Becker. All rights reserved.
 *
 *	Original:
 *	Created on: Dec 12, 2017
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
#include <stdbool.h>
#include <string.h>		/* memset() */
#if (XPRJ_DEBUG_CVI)
#include <userint.h>
#endif

// ----	Project Headers -------------------------
#include "clock_if.h"	/* tCwswClockTics */
#include "cwsw_eventsim.h"
#if (XPRJ_DEBUG_CVI)
#include "lw_coinopcoffeemachine.h"
#endif

// ----	Module Headers --------------------------
#include "coinopcoffeemachine.h"
#include "coinsensor.h"


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
static char const * const coinvend_RevString = "$Revision: 0123 $";

static bool initialized = false;
static tCwswClockTics task_end_time = 0;


// ============================================================================
// ----	Private Prototypes ----------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Functions ------------------------------------------------------
// ============================================================================

void
Csws_Sme_Ut__Task(void)
{
	tEventPayload ev = {evNotInit, 0};

	/* This illustrates one method of confirming the module init function has been called before
	 * 1st execution of functions that depend on that initialization. Another method is illustrated
	 * in this module's Init function, where we assert that modules upon which we depend have
	 * already been initialized.
	 */
	if(!initialized)
	{
		PostEvent(evNotInit, ev);
		return;
	}

	// process hardware / "MCAL" tasks
	Task(CoinSensor);

	// chunk another tooth on the SME cogwheel

	/* for now, we won't dedicate a task to updating the UI; we'll just notify the UI of time left */
	do {
		int32_t tmp = Cwsw_GetTimeLeft(task_end_time);
		ev.evId = evUpdateUi;
		ev.evInt = TO_U32(tmp);
		PostEvent(evUpdateUi, ev);
	} while(0);

	if(TM(task_end_time))
	{
		ev.evId = evTerminateRequested;
		PostEvent(evTerminateRequested, ev);
	}
}


// ====	STATE MACHINE STUFF (could be in a separate module) =======================================
#include "../cwsw_sme/include/fsm_extensions.h"


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================

// THIS WOULD GO INTO A MODULE-SPECIFIC CONFIGURATION HEADER
//!  Size of event queue for the Coin Vendor state machine.
enum { kCoffeeMachine_Sm_EventQueueSize = 5 };


/**
 * Coffee Machine operating states.
 * The names of these elements should correlate directly to those found in the state chart diagram.
 */
enum eCoffeeMachineOpStates {
    kCoffeeMachineStateUninit,          //!< Uninitialized, doesn't actually exist and is not seen in design documents.

    kCoffeeMachineStateIdle,
    kCoffeeMachineStateCoinInserted,
    kCoffeeMachineStateOptionSelected,

    kCoffeeMachineNumOpStates
};


/**	Events for the Position Sensor state machine.
 */
enum eCoffeeMachineEvents {
    evSmeCoffeeMachineNoEvent,			//!< "No Event" event, needed by the StateEngine

    evSmeCoffeeMachineCoinDropped,      //!< Transition-provoking event, we have recognized a valid coin and need to transition to Product Selection. The example culled from the inet had badly-named states, so beware.
    evSmeCoffeeMachineSelectionMade,	//!< Transition-provoking event, we have a valid product selection and need to transition into the dispensing state. We repeat: The example culled from the inet had badly-named states, so beware.
    evSmeCoffeeMachineProductDispensed,
	evSmeCoffeeMachineExecuteDoAction,	//!< Special event, specific to this version of the StateEngine and our usage of it, designed to transition from a state's Entry action to the same state's Do action within the same instance of the background task.

    kCVendSnsr_NumStateChartEvents		//!< Number of state chart events.
};


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

// THIS WOULD GO INTO A MODULE-SPECIFIC CONFIGURATION HEADER
/**	Event queue for the coin vending state machine.
 *	In the Unit Test environment, there are guards on either side to address a
 *	concern about the State Engine's Post-Event functionality. We need data to
 *	prove or disprove the existence of a buffer-bounds violation.
 */
typedef struct {
#if (XPRJ_Debug_Win_MinGW)
    unsigned short  lowguard;
#endif
    tFsmEvent      event_queue[kCoffeeMachine_Sm_EventQueueSize];
#if (XPRJ_Debug_Win_MinGW)
    unsigned short  higuard;
#endif
} tCoffeeMachine_Sm_EventQueue;

typedef enum eCoffeeMachineOpStates tCoffeeMachineOpStates;
typedef enum eCoffeeMachineEvents tCoffeeMachineEvents;


// ============================================================================
// ----	Module-level Variables ------------------------------------------------
// ============================================================================

//! SME Event Queue.
PRIVATE tCoffeeMachine_Sm_EventQueue CoffeeMachineSmEventQueue;

//! SME Control structure.
PRIVATE tFsmStateControl CoffeeMachineSmControl;


// ============================================================================
// ----	Private Prototypes ----------------------------------------------------
// ============================================================================
PRIVATE tFsmStateTable *GetSensorStateTable(void);

// ====	State Idle ========================================
//  --- state functions -----------------------------------
PRIVATE void State_Idle_Entry(void);
PRIVATE void State_Idle_Do(tFsmEvent ev);
PRIVATE void State_Idle_Exit(void);
//  --- guard functions -----------------------------------
//  --- transition actions --------------------------------

// ====	State CoinInserted ================================
//  --- state functions -----------------------------------
//  --- guard functions -----------------------------------
//  --- transition actions --------------------------------

// ====	State OptionSelected ==============================
//  --- state functions -----------------------------------
//  --- guard functions -----------------------------------
//  --- transition actions --------------------------------


/**
 * State transition table for the Idle state.
 */
PRIVATE tFsmStateEvent tblStateIdleEvents[] =
{   // exit event           			exit guard                  transition action           destination state
    {evSmeCoffeeMachineSelectionMade,   NULL_GUARD_FUNC,            NULL_TRANSITION_ACTION,		kCoffeeMachineStateCoinInserted},
    {evSmeCoffeeMachineNoEvent,        	NULL_GUARD_FUNC,            NULL_TRANSITION_ACTION,     kCoffeeMachineStateUninit}                    // End of list
};


/**	Main Position Sensor state machine state table.
 *	\note Because of the way it's typed, this table must follow all of the
 *	individual state-definition arrays. It is not possible to create a forward
 *	reference (i.e., a prototype or declaration) to a const table; const tables
 *	(such as the Exit Event Arrays) must be initialized at point of definition.
 */
PRIVATE tFsmStateTable CoffeeMachineStates[kCoffeeMachineNumOpStates] =
{   //{State,                           {Entry,                             Do,                             Exit},                      Exit_Events_Array}
    {kCoffeeMachineStateIdle,			{State_Idle_Entry,          	State_Idle_Do,          		State_Idle_Exit},       		tblStateIdleEvents},
};


/** Get a pointer to this object's State Machine table.
 *  This function is intended for use primarily by the State Machine Engine. Please, everyone else, avert your eyes.
 *  @return     The state machine table that contains each state, its entry, do and exit routines and its exit event array.
 */
PRIVATE tFsmStateTable *GetSensorStateTable(void)
{
    return (CoffeeMachineStates);
}

uint16_t Cwsw_Sme_Ut__Init(void)
{
	UNUSED(coinvend_RevString);

	/* Check for initialization of modules upon which we depend.
	 * Note that in this simple demonstration / unit test, we don't actually depend upon the order
	 * of initialization, so in one sense it imposes a false restriction to require these other
	 * modules to have already been initialized here; however, it's convenient in this environment
	 * and shows a method to do an init check.
	 */
	cwsw_assert(Get(Cwsw_Lib, Initialized));
	cwsw_assert(Get(Cwsw_Clock, Initialized));

	if(XPRJ_Debug_Win_MinGW)
	{
		#if defined(__GNUC__)	/* --- GNU Environment ------------------------------ */
		#pragma GCC diagnostic push
		#pragma GCC diagnostic ignored "-Wpedantic"
		#endif

		dprintf("\t%s %s\n" "\tEntering %s()\n\n", __FILE__, coinvend_RevString, __FUNCTION__);

		#if defined(__GNUC__)	/* --- GNU Environment ------------------------------ */
		#pragma GCC diagnostic pop
		#endif
	}

	// init machinery outside of SM
	Init(CoinSensor);

	// init SME
	if(TABLE_SIZE(CoffeeMachineSmEventQueue.event_queue) >= kCoffeeMachine_Sm_EventQueueSize)
	{
	    (void)memset(&CoffeeMachineSmEventQueue, 0, sizeof(CoffeeMachineSmEventQueue));

	    CoffeeMachineSmControl.Last_State        = kCoffeeMachineStateUninit;
	    CoffeeMachineSmControl.Cur_State         = kCoffeeMachineStateIdle;
	    CoffeeMachineSmControl.Tables_Ptr        = (tFsmStateTable *)GetSensorStateTable();    // cast away const-ness for sake of StateEngine
	    CoffeeMachineSmControl.Event_Queue_Ptr   = CoffeeMachineSmEventQueue.event_queue;
	    CoffeeMachineSmControl.Queue_Size        = kCoffeeMachine_Sm_EventQueueSize;

	    FSM_INIT(CoffeeMachineSmControl);                                    // Init the state machine

	}

	// after some time, just end.
	Cwsw_SetTimerVal(&task_end_time, 30000);	/* after 30 s, just quit */
	initialized = true;
	return 0;
}

PRIVATE void
State_Idle_Entry(void)
{
}

PRIVATE void
State_Idle_Do(tFsmEvent ev)
{
	UNUSED(ev);
}

PRIVATE void
State_Idle_Exit(void)
{
}

