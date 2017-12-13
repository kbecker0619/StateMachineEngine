/** @file
 *	@brief	One-sentence short description of file.
 *
 *	Description:
 *
 *	Copyright (c) 2018 Kevin L. Becker. All rights reserved.
 *
 *	Original:
 *	Created on: Dec 12, 2017
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
#include <stdbool.h>

// ----	Project Headers -------------------------
#include "clock_if.h"	/* tCwswClockTics */
#include "cwsw_eventsim.h"

// ----	Module Headers --------------------------
#include "coinvend.h"


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
static char const * const coinvend_RevString = "$Revision: 0123 $";

static bool initialized = false;
static tCwswClockTics task_end_time = 0;


// ============================================================================
// ----	Private Prototypes ----------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Functions ------------------------------------------------------
// ============================================================================

uint16_t Cwsw_Sme_Ut__Init(void)
{
	UNUSED(coinvend_RevString);
	cwsw_assert(Get(Cwsw_Lib, Initialized));
	if(XPRJ_Debug_Win_MinGW)
	{
		#if defined(__GNUC__)	/* --- GNU Environment ------------------------------ */
		#pragma GCC diagnostic push
		#pragma GCC diagnostic ignored "-Wpedantic"
		#endif

		dprintf("\t%s %s\n" "\tEntering %s()\n\n", __FILE__, coinvend_RevString, __FUNCTION__);

		#if defined(__GNUC__)	/* --- GNU Environment ------------------------------ */
		#pragma GCC diagnostic pop
		#endif
	}

	// after some time, just end.
	task_end_time = GET(SYSTEM_TIME) + 50;	/* 50 ms to start */
	initialized = true;
	return 0;
}

void
Csws_Sme_Ut__Task(void)
{
	tEventPayload ev = {evNotInit, 0};
	if(!initialized)
	{
		PostEvent(evNotInit, ev);
	}
	if(TM(task_end_time))
	{
		ev.evId = evTerminateRequested;
		PostEvent(evTerminateRequested, ev);
	}
}

