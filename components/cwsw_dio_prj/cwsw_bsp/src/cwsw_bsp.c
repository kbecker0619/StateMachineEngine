/** @file
 *	@brief	One-sentence short description of file.
 *
 *	Description:
 *
 *	Copyright (c) 2018 Kevin L. Becker. All rights reserved.
 *
 *	Original:
 *	Created on: Dec 21, 2017
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

// ----	Project Headers -------------------------
#include "cwsw_lib.h"
#include "cwsw_bsp.h"

#include "../../cwsw_arch/pic32mz/framework/system/common/sys_module.h"			/* SYS_Initialize() */


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
static char const * const cwsw_bsp_RevString = "$Revision: 0123 $";


// ============================================================================
// ----	Private Prototypes ----------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Functions ------------------------------------------------------
// ============================================================================

/** Initialization of all things not directly related to the library under test.
 * Yes, we realize that we're misusing the name "BSP"; here, it's much more generalized than the
 * word actually refers to.
 *
 * For the structure of this, since we're developing it as we try to get a generalized architecture
 * that "works" with Linux and Windows apps compiled w/ GCC; the Microchip Harmony; Atmel ASF;
 * IAR StarterKit SR730-SK; NXP Calypso, and AUTOSAR, we're taking the general structure and order
 * of things from the Harmony framework, and then morhping as appropriate.
 *
 * @return
 */
#include "../../cwsw_arch/pic32mz/framework/system/system.h"					/* API as defined by MHC. Note that including any part of the path, violates all kinds of coding rules (including my own personal rules) */
#include "../../cwsw_arch/pic32mz/framework/system/devcon/sys_devcon.h"		/* SYS_DEVCON_Initialize() */
#include "../../cwsw_arch/cwsw_arch.h"
#include "cwsw_board.h"
uint16_t
BSP__Init(void)
{
	UNUSED(cwsw_bsp_RevString);

	do {	    /* Core Processor Initialization */
		(void) Init(Arch);
	} while(0);

	do {		/* Board Support Package Initialization */
		(void) Init(Board);
		BSP_Initialize();
	} while(0);

	do {		/* Initialize Drivers */

	} while(0);

	do {		/* Initialize System Services */

	} while(0);

	do {		/* Initialize Middleware */

	} while(0);

	do {		/* Enable Global Interrupts */
//		SYS_INT_Enable();
	} while(0);

	do {		/* Initialize the Application */
//		APP_Initialize();
	} while(0);

	(void) Init(Cwsw_Lib);

	/* the following, for now, are taken from the Harmony project */
	SYS_Initialize ( NULL );


	return 0;
}
