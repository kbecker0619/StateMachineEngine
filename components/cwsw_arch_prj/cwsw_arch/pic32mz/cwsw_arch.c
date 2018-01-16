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

#include "projcfg.h"

// ----	System Headers --------------------------
#include <stdbool.h>				/* type bool + true, false */

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
#if (USE_SYS_CLK == true)
#include "system/clk/sys_clk.h"		/* todo: make "system/clk" when eclipse symlinks are removed */
WEAK void
SYS_CLK_Initialize ( const SYS_CLK_INIT *clkInit )
{
	/* NOTE: In the Microchip ecosystem, this function is located in the Harmony framework.
	 * i'm not sure yet how to link into that system, without requiring the user to install
	 * Framework at a known position.
	 *
	 * todo: investigate symlinking the MHC framework folder - in theory, this might work, because
	 * MHC already requires installation on the same drive / parent directory as the projects
	 * using MHC.
	 */

	UNUSED(clkInit);
}

#else
#define SYS_CLK_Initialize(a)			do { UNUSED(a); } while(0)

#endif

#if (USE_SYS_DEVCON == true)
WEAK SYS_MODULE_OBJ
SYS_DEVCON_Initialize( const SYS_MODULE_INDEX index, const SYS_MODULE_INIT * const init )
{
	/* NOTE: In the Microchip ecosystem, this function is located in the code generated by the
	 * Harmony code generator. because the caller, Init(Cwsw_Arch), is located in a reusable
	 * library, i'm not yet certain of the best way to leverage this.
	 *
	 * todo: investigate symlinking the generated code
	 */
}
#else
#define SYS_DEVCON_Initialize(a, b)		do { UNUSED(a); UNUSED(b); } while(0)
#define SYS_DEVCON_PerformanceConfig(a)	do { UNUSED(a); } while(0)

#endif

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
