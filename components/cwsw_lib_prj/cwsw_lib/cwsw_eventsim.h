/** @file
 *	@brief	API for proposed simulated events.
 *
 *	Description:
 *
 *	Copyright (c) 2018 Kevin L. Becker. All rights reserved.
 *
 *	Original:
 *	Created on: Jun 4, 2017
 *	Author: kbecker
 *
 *	Current:
 *	$Revision: $
 *	$Date: $
 */

#ifndef CWSW_EVENTSIM_H_
#define CWSW_EVENTSIM_H_

#ifdef	__cplusplus
extern "C" {
#endif

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

// ----	System Headers --------------------------

// ----	Project Headers -------------------------
#include "projcfg.h"

// ----	Module Headers --------------------------


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================
#define CWSW_EVENTSIM_H__REVSTRING "$Revision: 0123 $"


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

/**	In the absence of a real event system, this is the payload for our simulated
 *	event.
 *	The 1st field, as I envision it, is reserved for the event ID, but the way I've implemented this
 *	pseudo-system, that is redundant, as the name of the event handler itself is unique to the
 *	event; also, it's very difficult to create a field of enumerated constants before that
 *	enumeration has been defined (one way or the other, there needs to be a forward reference).
 *	Therefore, do with the 1st field what you will.
 *
 *	One suggestion: if you want a generic event handler, you can then put a unique identifier
 *	(as in, the event, cause, reason, etc. code) into the evId field.
 */
typedef struct {
	uint16_t	evId;	// for unit test, i need to know the event id. this is super-simplistic pseudo-eventing system anyway, solely for purpose of illustrating possibilities
	uint32_t	evInt;
} tEventPayload;

/**	In the absence of a real event system, this is the prototype for an event
 *	handler. Normal instantiation would be for an array of handlers, each of
 *	which "subscribes" to said event.
 */
typedef void (*pEventHandler)(tEventPayload EventData);


// -----------------------------------------------------------------------------
// ---- experimental simulation of event posting -------------------------------
// -----------------------------------------------------------------------------

/**	List of supported events.
 * 	@note Even though this is an enumerated list, it is NOT meant to be used for
 * 	the actual values, but for the names themselves. See the PostEvent
 * 	definition to see how that's done.
 */
#if (USE_SIMULATED_EVENTS)
#include "projevtnames.h"
typedef enum eProjectEvents tProjectEvents;
#endif


// ============================================================================
// ----	Public Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public API ------------------------------------------------------------
// ============================================================================

/*	Posting an event.
 * 	These macros are designed to look like posting to the user (client), and
 * 	a handler/callback to the subscriber. Unlike some event systems, we don't
 * 	specify a handler, because we don't care who all subscribes to our data.
 * 	as implemented now, there is one C *symbol* that must be defined; however,
 * 	it could be a function that forwards the event to other handlers, or a
 * 	macro that iterates through an array, or ...
 */
#if (USE_SIMULATED_EVENTS)
#define PostEvent(ev, evpayload)		_post_event(ev, evpayload)
#define _post_event(ev, evpayload)		EventHandler__ ## ev(evpayload)

#else
#define PostEvent(ev, evpayload)		do {UNUSED(evpayload);} while(0)

#endif


#ifdef	__cplusplus
}
#endif

#endif /* CWSW_EVENTSIM_H_ */
