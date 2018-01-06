/** @file
 *	@brief	Initialize the MCU.
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

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

// ----	System Headers --------------------------
#include <stdbool.h>

// ----	Project Headers -------------------------

// ----	Module Headers --------------------------
#include "cwsw_arch.h"


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
static char const * const cwsw_arch_RevString = "$Revision: 0123 $";

static bool initialized = false;


// ============================================================================
// ----	Private Prototypes ----------------------------------------------------
// ============================================================================

#define SYS_CLK_Initialize(a)			do { UNUSED(a); } while(0)
#define SYS_DEVCON_Initialize(a, b)		do { UNUSED(a); UNUSED(b); } while(0)
#define SYS_DEVCON_PerformanceConfig(a)	do { UNUSED(a); } while(0)
#define SYS_PORTS_Initialize()			do {} while(0)


// ============================================================================
// ----	Public Functions ------------------------------------------------------
// ============================================================================

uint16_t
Cwsw_Arch__Init(void)
{

	UNUSED(cwsw_arch_RevString);
	// for desktop use, there's really not much to do here.

    /* Core Processor Initialization */
	SYS_CLK_Initialize( NULL );
	SYS_DEVCON_Initialize(0, NULL);
	SYS_DEVCON_PerformanceConfig(0);
	SYS_PORTS_Initialize();

	initialized = true;
	return 0;

}


bool
Cwsw_Arch__Get_Initialized(void)
{
	return initialized;
}
