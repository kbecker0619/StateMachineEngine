/** @file
 *	@brief	PROJECT-SPECIFIC list of events.
 *
 *	Description:
 *	This file is intended to contain one thing, and one thing only: an enumerated list of events
 *	for the project, that are to be used in the super-minimalist simulated-event-handling
 *	mechanism used in the CWSW UT environment.
 *
 *	Copyright (c) 2018 Kevin L. Becker. All rights reserved.
 *
 *	Original:
 *	Created on: Dec 13, 2017
 *	Author: kbecker
 *
 *	Current:
 *	$Revision: $
 *	$Date: $
 */

#ifndef UT_PROJEVTNAMES_H_
#define UT_PROJEVTNAMES_H_

#ifdef	__cplusplus
extern "C" {
#endif

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

// ----	System Headers --------------------------

// ----	Project Headers -------------------------

// ----	Module Headers --------------------------


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================
#define UT_PROJEVTNAMES_H__REVSTRING "$Revision: 0123 $"

/** Project-specific list of events.
 * This list must be contained inside the enumeration; the name of the enumeration tag is
 * significant, and it is highly recommended the 1st enum (value of 0) should be reserved for No
 * Event. Other than that,
 */
enum eProjectEvents {
	evNoEvent,				//!< reserved value, used for initialization
	evNotInit,              //!< evNotInit
	evTerminateRequested
};


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public API ------------------------------------------------------------
// ============================================================================

extern void EventHandler__evNotInit				(tEventPayload EventData);
extern void EventHandler__evTerminateRequested	(tEventPayload EventData);


#ifdef	__cplusplus
}
#endif

#endif /* UT_PROJEVTNAMES_H_ */
