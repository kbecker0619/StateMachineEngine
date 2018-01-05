/** @file cwsw_lib.c
 *	@brief	One-sentence short description of file.
 *
 *	Description:
 *
 *	Copyright (c) Kevin L. Becker. All rights reserved.
 *
 *	Original:
 *	Created on: Jun 4, 2017
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

// ----	Project Headers -------------------------

// ----	Module Headers --------------------------
#include "cwsw_lib.h"


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
static char const * const cwsw_lib_RevString = "$Revision: 0123 $";

/** "Has this module been initialized?" flag.
 *	For the SQSP Library, the import of this flag is less than in most modules; there are no
 *	state-related or HW initializations that must be done, and there is no task function that needs
 *	to be set up. In addition, nothing in this module needs to be deinitialized (such as, in
 *	preparation for entry into sleep mode, etc.)
 */
static bool initialized = false;


// ============================================================================
// ----	Private Prototypes ----------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Functions ------------------------------------------------------
// ============================================================================

/** Module initialization function.
 *	This function shall be called before the main scheduler is started.
 *	This function's responsibility is to set up the local vars, and manage the necessary HW, to
 *	prepare for the task function's 1st call (once the scheduler has been started).
 *	@returns error code, or 0 for no problem (i.e., success).
 */
uint16_t
Cwsw_Lib__Init(void)
{
	UNUSED(cwsw_lib_RevString);
	if( (XPRJ_Debug_Win_MinGW) || (XPRJ_Debug_Linux_GCC) || (XPRJ_DEBUG_MSC) || (XPRJ_DEBUG_CVI) )
	{
		disable_console_buffering();

		#if defined(__GNUC__)	/* --- GNU Environment ------------------------------ */
		#pragma GCC diagnostic push
		#pragma GCC diagnostic ignored "-Wpedantic"
		#endif

		dprintf("\t%s %s\n" "\tEntering %s()\n\n", __FILE__, cwsw_lib_RevString, __FUNCTION__);

		#if defined(__GNUC__)	/* --- GNU Environment ------------------------------ */
		#pragma GCC diagnostic pop
		#endif
	}
	initialized = true;
	return 0;
}

bool
Cwsw_Lib__Get_Initialized(void)
{
	return initialized;
}
