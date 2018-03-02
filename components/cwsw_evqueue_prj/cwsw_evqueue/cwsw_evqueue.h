/** @file cwsw_evqueue.h
 *	@brief	One-sentence short description of file.
 *
 *	Description:
 *
 *	Copyright (c) 2018 Kevin L. Becker. All rights reserved.
 *
 *	Original:
 *	Created on: Mar 1, 2018
 *	Author: kbecker
 *
 *	Current:
 *	$Revision: $
 *	$Date: $
 */

#ifndef CWSW_EVQUEUE_H_
#define CWSW_EVQUEUE_H_

#ifdef	__cplusplus
extern "C" {
#endif

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

#include "projcfg.h"

// ----	System Headers --------------------------

// ----	Project Headers -------------------------
#include "cwsw_lib.h"

// ----	Module Headers --------------------------


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================
#define CWSW_EVQUEUE_H__REVSTRING "$Revision: 0123 $"


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================
#include "cwsw_evq_proj.h"

//! state control structure
typedef struct sEvQueue {
	tEvQ_Event          *Event_Queue_Ptr;			// event queue
	unsigned char		Queue_Size;					// queue size
	unsigned char		Queue_Count;				// number of items in the queue
	tEvQ_Event          *Write_Ptr;					// queue write pointer
	tEvQ_Event          *Read_Ptr;					// queue read pointer
} tEvQueue;


// ============================================================================
// ----	Public Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public API ------------------------------------------------------------
// ============================================================================

// ==== Discrete Functions ================================================== {
extern uint16_t Cwsw_EvQ__Init(void);
extern uint16_t Cwsw_EvQ__InitEvQ(void *c);

/** Target for Get(Cwsw_EvQueue, Initialized) interface. */
extern bool Cwsw_EvQ__Get_Initialized(void);

extern uint16_t Cwsw_EvQ__FlushEvents( tEvQueue *control_ptr );


// ==== /Discrete Functions ================================================= }

// ==== Targets for Get/Set APIs ============================================ {
/** "Chapter Designator" for Get/Set API.
 *	Intentionally unused symbol, designed to get you to the correct starting
 *	point, when you want to find macros for the Get/Set API; simply highlight
 *	the Module argument in your IDE (e.g, Eclipse, NetBeans, etc.), and select
 *	Go To Definition.
 */
enum { Cwsw_EvQueue = 4 };	/* Component ID for Event Queue */

/** Target symbol for Get(Cwsw_Board, xxx) interface */
#define Cwsw_EvQueue__Get(resource)		Cwsw_EvQueue__Get_ ## resource()


// ==== /Targets for Get/Set APIs =========================================== }


#ifdef	__cplusplus
}
#endif

#endif /* CWSW_EVQUEUE_H_ */
