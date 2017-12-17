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

#include "projcfg.h"

// ----	System Headers --------------------------
#include <stdbool.h>
#if (XPRJ_DEBUG_CVI)
#include <userint.h>
#endif

// ----	Project Headers -------------------------
#include "clock_if.h"	/* tCwswClockTics */
#include "cwsw_eventsim.h"
#if (XPRJ_DEBUG_CVI)
#include "lw_coinopcoffeemachine.h"
#endif

// ----	Module Headers --------------------------
#include "coinopcoffeemachine.h"
#include "coinsensor.h"


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

	/* Check for initialization of modules upon which we depend.
	 * Note that in this simple demonstration / unit test, we don't actually depend upon the order
	 * of initialization, so in one sense it imposes a false restriction to require these other
	 * modules to have already been initialized here; however, it's convenient in this environment
	 * and shows a method to do an init check.
	 */
	cwsw_assert(Get(Cwsw_Lib, Initialized));
	cwsw_assert(Get(Cwsw_Clock, Initialized));

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
	Init(CoinSensor);

	Cwsw_SetTimerVal(&task_end_time, 30000);	/* after 30 s, just quit */
	initialized = true;
	return 0;
}

void
Csws_Sme_Ut__Task(void)
{
	tEventPayload ev = {evNotInit, 0};

	/* This illustrates one method of confirming the module init function has been called before
	 * 1st execution of functions that depend on that initialization. Another method is illustrated
	 * in this module's Init function, where we assert that modules upon which we depend have
	 * already been initialized.
	 */
	if(!initialized)
	{
		PostEvent(evNotInit, ev);
		return;
	}

	Task(CoinSensor);

	/* for now, we won't dedicate a task to updating the UI; we'll just notify the UI of time left */
	do {
		int32_t tmp = Cwsw_GetTimeLeft(task_end_time);
		ev.evId = evUpdateUi;
		ev.evInt = TO_U32(tmp);
		PostEvent(evUpdateUi, ev);
	} while(0);

	if(TM(task_end_time))
	{
		ev.evId = evTerminateRequested;
		PostEvent(evTerminateRequested, ev);
	}
}

