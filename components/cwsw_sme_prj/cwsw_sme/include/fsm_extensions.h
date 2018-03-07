/** @file fsm_extensions.h
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

#ifndef INCLUDE_FSM_EXTENSIONS_H_
#define INCLUDE_FSM_EXTENSIONS_H_

#ifdef	__cplusplus
extern "C" {
#endif

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

// ----	System Headers --------------------------

// ----	Project Headers -------------------------

// ----	Module Headers --------------------------
#include "../../cwsw_sme/include/cwsw_smengine.h"


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================
#define INCLUDE_FSM_EXTENSIONS_H__REVSTRING "$Revision: 0123 $"


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

/**	Pointer-to-function type for StateEngine Transition Actions, and null value.
 */
//! @{
typedef void (*TRANSITION_ACTION_TYPE)(void);
#define NULL_TRANSITION_ACTION      (TRANSITION_ACTION_TYPE)0
//! @}

/**	Pointer-to-function type for StateEngine Transition Guard functions, and
 * 	null value.
 * 	@return Boolean, where FALSE prohibits a transition and TRUE allows the
 * 	transition.
 */
//! @{
typedef bool (*GUARD_FUNC_TYPE)(void);
#define NULL_GUARD_FUNC             (GUARD_FUNC_TYPE)0
//! @}


// ============================================================================
// ----	Public Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public API ------------------------------------------------------------
// ============================================================================

//! Initialize the State Machine used in our module.
#define FSM_INIT(sm)		Fsm_InitStateMachine(&sm)

//! Execute one iteration of the State Machine.
#define FSM_EXEC(sm)		Fsm__Execute(&sm)


#ifdef	__cplusplus
}
#endif

#endif /* INCLUDE_FSM_EXTENSIONS_H_ */
