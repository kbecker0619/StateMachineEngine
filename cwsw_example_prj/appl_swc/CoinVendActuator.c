/** @file CoinVendActuator.c
 *	@brief	One-sentence short description of file.
 *
 *	Description:
 *
 *	Copyright (c) 2017 Kevin L. Becker. All rights reserved.
 *
 *	Original:
 *	Created on: Jan 25, 2017
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
#include "StateEngine.h"
#include "fsm_extensions.h"

// ----	Module Headers --------------------------


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
static char const * const CoinVendActuator_RevString = "$Revision: 0123 $";


// ============================================================================
// ----	Private Prototypes ----------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Functions ------------------------------------------------------
// ============================================================================

void CoinVendActuator_Init(void)
{
//	if(NUM_ARRAY_ELEMENTS(CVendAct_EvQueue.event_queue) >= kCVendAct_Sc_EventQueueSize)
//	{
//	    (void)memset(&CVendAct_EvQueue, 0, sizeof(CVendAct_EvQueue));
//
//	    CVendAct_SmControl.Last_State     	= kCVendAct_State_Uninit;
//	    CVendAct_SmControl.Cur_State      	= kCVendAct_State_NotOperating;
//	    CVendAct_SmControl.Tables_Ptr 	 	= (tFsmStateTable *)GetActuatorStateTable();   // cast away const-ness for sake of StateEngine
//		CVendAct_SmControl.Event_Queue_Ptr 	= CVendAct_EvQueue.event_queue;
//	    CVendAct_SmControl.Queue_Size     	= kCVendAct_Sc_EventQueueSize;
//
//	    FSM_INIT(CVendAct_SmControl);		// Start the state machine
//	}
}


