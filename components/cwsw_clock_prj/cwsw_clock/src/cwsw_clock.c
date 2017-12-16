/** @file
 *	@brief
 *
 *	Description:
 *
 *	Copyright (c) 2017 Kevin L. Becker. All rights reserved.
 *
 *	Original:
 *	Created on: Sep 1, 2016
 *	Author: Kevin L. Becker
 *
 *	Current:
 *	$Revision: $
 *	$Date: $
 */

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

// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Global Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Module-level Variables ------------------------------------------------
// ============================================================================

static char const * const cwsw_clock_RevString = "$Revision: 09052016 $";

static bool initialized = false;


// ============================================================================
// ----	Private Prototypes ----------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Functions ------------------------------------------------------
// ============================================================================

#if (XPRJ_Debug_Win_MinGW) || (XPRJ_DEBUG_MSC) || (XPRJ_DEBUG_CVI)
/*	when run on MinGW within Windows, the clock tick is #defined to be the same as the system
 *	clock() function.
 */

#else
/**	Clock tic.
 *	In this UT environment, the sole purpose for this function is to allow the
 *	project to build when you're doing a test build in the Debug build target
 *	from within Eclipse.
 *
 *	In a real live system, it would return the number of milliseconds since a
 *	system reset.
 */
tCwswClockTics Cwsw__Clock(void)
{
	static tCwswClockTics count = 0;
	return ++count;
}

#endif

uint16_t Cwsw_Clock__Init(void)
{
	UNUSED(cwsw_clock_RevString);
	cwsw_assert(Get(Cwsw_Lib, Initialized));
	if( (XPRJ_Debug_Win_MinGW) || (XPRJ_DEBUG_MSC) || (XPRJ_DEBUG_CVI) )
	{
		#if defined(__GNUC__)	/* --- GNU Environment ------------------------------ */
		#pragma GCC diagnostic push
		#pragma GCC diagnostic ignored "-Wpedantic"
		#endif

		dprintf("\t%s %s\n" "\tEntering %s()\n\n", __FILE__, cwsw_clock_RevString, __FUNCTION__);

		#if defined(__GNUC__)	/* --- GNU Environment ------------------------------ */
		#pragma GCC diagnostic pop
		#endif
	}
	initialized = true;
	return 0;
}
