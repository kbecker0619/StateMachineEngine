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
#include "cwsw_clock.h"


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


/**	Determine if timer "a" has expired (i.e., matured) or not.
 *	@param   a - name of timer
 *	@return  Boolean where TRUE indicates the timer has indeed expired.
 */
//  Expansion of HAS_TIMER_EXPIRED(TIMER_NAME)
//! @{
#define HAS_TIMER_EXPIRED(a)            _HAS_TIMER_EXPIRED(a)
#define _HAS_TIMER_EXPIRED(a)           (Cwsw_GetTimeLeft(a) <= 0)
//! @}

/**
 * Has a timer expired?
 * This definition provided to accommodate UML notation.
 */
#define TM(tmr)                         HAS_TIMER_EXPIRED(tmr)


#ifdef	__cplusplus
}
#endif

#endif /* INCLUDE_CLOCK_IF_H_ */
