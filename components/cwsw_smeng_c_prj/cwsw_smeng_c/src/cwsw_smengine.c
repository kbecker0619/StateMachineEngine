/**
 *  @file
 *  @page       StateEngine     State Engine Module
 *  @brief      State Machine execution Engine.
 *
 *	Description:	 Generic class to process a state table.
 *				This file is pulled directly from the version found in the Prometheus project, and then modified
 *              to comply with Dish standards, to fix an initialization bug, add in-state reactions, add a rudimentary
 *              transition guard, and add transition actions. The author takes no credit for any code, and all blame for
 *              errors introduced during migration.
 *
 *	Copyright (c) 2017 Kevin L. Becker. All rights reserved.
 *
 *	Original:
 *	Created on: Jan 24, 2017
 *	Author: kbecker
 *
 *	Current:
 *	$Revision: $
 *	$Date: $
 */

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

// ----	System Headers --------------------------

// ----	Project Headers -------------------------
#include "cwsw_lib.h"
#include "cwsw_smengine.h"

// ----	Module Headers --------------------------
#include "cwsw_smengine_prv.h"


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
static char const * const stateengine_RevString = "$Revision: 0123 $";


// ============================================================================
// ----	Private Prototypes ----------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Functions ------------------------------------------------------
// ============================================================================

/**	Initialize one FSM machine (note there can be multiple FSMs within the
 * 	project).
 * 	Executes the entry function for the default state.
 *
 *  @param		control_ptr = pointer to the current state control structure
 */
typedef void (*pfp)(void);
void Fsm_InitStateMachine(tFsmStateControl *pStateCtrl)
{
	pfp func_ptr = NULL;
	UNUSED(stateengine_RevString);
	
	#if defined(__GNUC__)	/* --- GNU Environment ------------------------------ */
	#pragma GCC diagnostic push
	#pragma GCC diagnostic ignored "-Wpedantic"
	#endif

	dprintf("\t%s %s\n" "\tEntering %s()\n\n", __FILE__, "Dummy Revision String", __FUNCTION__);

	#if defined(__GNUC__)	/* --- GNU Environment ------------------------------ */
	#pragma GCC diagnostic pop
	#endif

	if(pStateCtrl)
	{
		// initialize the event queue
		Fsm_FlushEvents( pStateCtrl );

		// check for initialization

	    /* because all of our states are base-1 (STATE_NONE is 0), but the state
	     * machine tables are base-0, we must compensate before we call the
	     * state's entry function. but, just in case someone compensated for the
	     * legacy behavior, floor the index value at 0. (by the way, we know the
	     * MAX works because we know the index is signed, and we know the state-
	     * table indexes are signed, because they're either enumerated values,
	     * or simple defines.
	     */
		func_ptr = pStateCtrl->Tables_Ptr[ MAX(pStateCtrl->Cur_State - 1, 0) ].Functions.Entry_Func;
		if(func_ptr != NULL)
		{
			// call the function
			func_ptr();
		}
	}
}


/**	Flushes all events from the queue.
 *  @param		control_ptr = pointer to the current state control structure
 */
void Fsm_FlushEvents( tFsmStateControl *pStateControl )
{
	if(pStateControl)
	{
		// reset the pointers/set count to 0
		pStateControl->Read_Ptr = pStateControl->Event_Queue_Ptr;
		pStateControl->Write_Ptr = pStateControl->Event_Queue_Ptr;
		pStateControl->Queue_Count = 0;
	}
}


