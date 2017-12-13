/** @file stateengine.h
 *	@brief	One-sentence short description of file.
 *
 *	Description:
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

#ifndef STATEENGINE_H_
#define STATEENGINE_H_

#ifdef	__cplusplus
extern "C" {
#endif

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

// ----	System Headers --------------------------
#include <stdint.h>
#include <stdbool.h>	/* bool */
#include <stdlib.h>     /* size_t (http://www.eetimes.com/discussion/programming-pointers/4026076/Why-size-t-matters) */

// ----	Project Headers -------------------------

// ----	Module Headers --------------------------


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================
#define STATEENGINE_H__REVSTRING "$Revision: 0123 $"


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

//! event type
typedef unsigned char tFsmEvent;

//! state type
typedef unsigned char tFsmState;

//! state functions type
typedef struct
{
	void ( * Entry_Func ) ( void );	            //!< entry function
	void ( * Exec_Func )  ( tFsmEvent event );	//!< execute function. Note this can provoke a state change.
	void ( * Exit_Func )  ( void );		        //!< exit function
} STATE_FUNCTION_TYPE;

//! state events structure
typedef const struct
{
	tFsmEvent	Event;						//!< event that provokes a transition.
	bool		(*Guard)(void);				/**< Guard evaluator. Because we aren't doing the full UML treatment, where a guard
											 *   can be almost anything, we will provide access to a function that can stand in
											 *   for full UML treatment.
											 */
	void (*TransitionAction)(void);			//!< Transition action.
	tFsmState	State;						//!< provided event and guard qualifications pass, the state to which we will transition.
} STATE_EVENT_TYPE;

//! state table structure
typedef const struct
{
	tFsmState			Name;				// state name ( for clarity only )
	STATE_FUNCTION_TYPE	Functions;			// functions
	STATE_EVENT_TYPE    *Events;		    // pointer to an array of events for this state
} tFsmStateTable;

//! state control structure
typedef struct
{
	tFsmState		 Last_State;					// last state
	tFsmState		 Cur_State;					// current state
	tFsmEvent		 Last_Event;					// last event
	tFsmStateTable	*Tables_Ptr;				// pointer to an array of states
	tFsmEvent       *Event_Queue_Ptr;			// event queue
	unsigned char	 Queue_Size;					// queue size
	unsigned char	 Queue_Count;				// number of items in the queue
	tFsmEvent       *Write_Ptr;					// queue write pointer
	tFsmEvent       *Read_Ptr;					// queue read pointer
} tFsmStateControl;


// ============================================================================
// ----	Public Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public API ------------------------------------------------------------
// ============================================================================

extern void		Fsm_InitStateMachine( tFsmStateControl *control_ptr );
extern void		Fsm_FlushEvents( tFsmStateControl *control_ptr );


#ifdef	__cplusplus
}
#endif

#endif /* STATEENGINE_H_ */
