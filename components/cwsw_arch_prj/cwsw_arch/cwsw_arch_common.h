/** @file
 *	@brief	One-sentence short description of file.
 *
 *	Description:
 *
 *	Copyright (c) 2018 Kevin L. Becker. All rights reserved.
 *
 *	Original:
 *	Created on: Jan 3, 2018
 *	Author: kbecker
 *
 *	Current:
 *	$Revision: $
 *	$Date: $
 */

#ifndef CWSW_ARCH_COMMON_H_
#define CWSW_ARCH_COMMON_H_

#ifdef	__cplusplus
extern "C" {
#endif

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

#include "projcfg.h"

// ----	System Headers --------------------------
#include <stdint.h>

// ----	Project Headers -------------------------
#include "cwsw_lib.h"

// ----	Module Headers --------------------------


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================
#define CWSW_ARCH_COMMON_H__REVSTRING "$Revision: 0123 $"


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
extern uint16_t Cwsw_Arch__Init(void);

// ==== /Discrete Functions ================================================= }

// ==== Targets for Get/Set APIs ============================================ {

/** "Chapter Designator" for Get/Set API.
 *	Intentionally unused symbol, designed to get you to the correct starting point, when you want
 *	to find macros for the Get/Set API; simply highlight the Module argument, and select Go To
 *	Definition.
 */
enum { Cwsw_Arch };	/* "None" board - Windows / Linux Desktop */

/** Target symbol for Get(Cwsw_Arch, xxx) interface */
#define Cwsw_Arch__Get(a)		Cwsw_Arch__Get_ ## a()

/** Target for Get(Cwsw_Arch, Initialized) interface */
extern bool 					Cwsw_Arch__Get_Initialized(void);

// ==== /Targets for Get/Set APIs =========================================== }


#ifdef	__cplusplus
}
#endif

#endif /* CWSW_ARCH_COMMON_H_ */
