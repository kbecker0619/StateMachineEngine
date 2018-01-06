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
#include "cwsw_lib.h"		/* foundational, cwsw-common stuff */
#include "cwsw_arch.h"		/* which MCU are we using? should be set by command-line include paths */
#include "cwsw_board.h"		/* which board are we using? each board is built upon a specific MCU. path to this folder should be set by command-line include paths */
#include "cwsw_bsp.h"		/* how are we using this board? yes, conceptually, a bsp could support multiple boards and/or MCUs, but that's not where we are at this moment. this file will be project-specific */

#include "system/sys_module.h"			/* SYS_Initialize() */

// ----	Module Headers --------------------------


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

//typedef enum eBspLeds tBspLeds;


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

/** Function:
 *	void BSP_Initialize(void)
 *
 * Summary:
 * 	Performs the necessary actions to initialize a board.
 *
 * Description:
 * 	This function initializes the LED, Switch and other ports on the board.
 * 	This function must be called by the user before using any APIs present in
 * 	this BSP.
 *
 * Remarks:
 * 	Refer to bsp.h for usage information.
*/
void
BSP_Initialize(void)
{
	/* Setup the USB VBUS Switch Control Pin */
	Set(Cwsw_Board, UsbVbus, kBrdUsbVbusSwitchState_Disable);

	/* Switch off LEDs */
	SET(BspActivity1, kLogicalOff);
	BSP_LEDOff(kBspActivity1);

	SET(BspActivity2, kLogicalOff);
    BSP_LEDOff(kBspActivity2);

	SET(BspActivity3, kLogicalOff);
    BSP_LEDOff(kBspActivity3);
}

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
 * of things from the Harmony framework, and then morphing as appropriate.
 *
 * @return
 */
#include "system/system.h"					/* API as defined by MHC. Note that including any part of the path, violates all kinds of coding rules (including my own personal rules) */
//#include "../../cwsw_arch/pic32mz/framework/system/devcon/sys_devcon.h"		/* SYS_DEVCON_Initialize() */
uint16_t
BSP__Init(void)
{
	UNUSED(cwsw_bsp_RevString);

	do {	    /* Core Processor Initialization */
		(void) Init(Cwsw_Arch);
	} while(0);

	do {		/* Board Support Package Initialization */
		(void) Init(Cwsw_Board);
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
		(void) Init(Cwsw_Lib);
//		APP_Initialize();
	} while(0);



	return 0;
}
