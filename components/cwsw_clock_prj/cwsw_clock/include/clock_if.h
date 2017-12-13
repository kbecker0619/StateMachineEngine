/** @file clock_if.h
 *	@brief	One-sentence short description of file.
 *
 *	Description:
 *
 *	Copyright (c) 2017 Kevin L. Becker. All rights reserved.
 *
 *	Original:
 *	Created on: Jan 26, 2017
 *	Author: kbecker
 *
 *	Current:
 *	$Revision: $
 *	$Date: $
 */

#ifndef INCLUDE_CLOCK_IF_H_
#define INCLUDE_CLOCK_IF_H_

#ifdef	__cplusplus
extern "C" {
#endif

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

// ----	System Headers --------------------------

// ----	Project Headers -------------------------

// ----	Module Headers --------------------------
#include "cwsw_clock.h"	/* user calibration: select the CWSW clock module */


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================
#define INCLUDE_CLOCK_IF_H__REVSTRING "$Revision: 0123 $"


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public API ------------------------------------------------------------
// ============================================================================

/**	Get the current system time, in ms.
 */
//  Expansion of GET(SYSTEM_TIME)
#define GET_SYSTEM_TIME()               (Cwsw__Clock())


#ifdef	__cplusplus
}
#endif

#endif /* INCLUDE_CLOCK_IF_H_ */