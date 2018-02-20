/** @file cwsw_board.h
 *	@brief	One-sentence short description of file.
 *
 *	Description:
 *
 *	Copyright (c) 2018 Kevin L. Becker. All rights reserved.
 *
 *	Original:
 *	Created on: Feb 20, 2018
 *	Author: kbecker
 *
 *	Current:
 *	$Revision: $
 *	$Date: $
 */

#ifndef CWSW_BOARD_MPC5748G_DEVKIT_CWSW_BOARD_H_
#define CWSW_BOARD_MPC5748G_DEVKIT_CWSW_BOARD_H_

#ifdef	__cplusplus
extern "C" {
#endif

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

#include "projcfg.h"

// ----	System Headers --------------------------
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

// ----	Project Headers -------------------------
/* note: while i personally strongly agree with the coding guideline that says,
 * "no path statements in include statements", i am doing that here in my early
 * attempt to support multiple MCU architectures and multiple boards; in my idea,
 * the include paths specified on the command line should point to the correct
 * board family, or board, and the published structure should be identical
 * across all boards.
 *
 * of course there are other, perhaps better, ways to do this, but this is my path during very early
 * development of my system.
 */

// ----	Module Headers --------------------------
#include "../cwsw_board_common.h"


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================
#define CWSW_BOARD_MPC5748G_DEVKIT_CWSW_BOARD_H__REVSTRING "$Revision: 0123 $"


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public API ------------------------------------------------------------
// ============================================================================

// ==== Discrete Functions ================================================== {
// ==== /Discrete Functions ================================================= }

// ==== Targets for Get/Set APIs ============================================ {
// ==== /Targets for Get/Set APIs =========================================== }


#ifdef	__cplusplus
}
#endif

#endif /* CWSW_BOARD_MPC5748G_DEVKIT_CWSW_BOARD_H_ */
