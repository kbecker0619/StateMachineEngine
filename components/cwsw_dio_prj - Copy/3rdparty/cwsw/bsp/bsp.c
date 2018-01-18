/** @file bsp.c
 *	@brief	One-sentence short description of file.
 *
 *	Description:
 *
 *	Copyright (c) 2018 Kevin L. Becker. All rights reserved.
 *
 *	Original:
 *	Created on: Jan 7, 2018
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

//#include "cwsw_arch.h"	/* which MCU are we using? should be set by command-line include paths */
#include "cwsw_board.h"		/* which board are we using? each board is built upon a specific MCU. path to this folder should be set by command-line include paths */

/* note: while i personally strongly agree with the coding guideline that says, "no path statements
 * in include statements", i am doing that here in my early attempt to support multiple MCU
 * architectures and multiple boards; in my idea, the include paths specified on the command line
 * should point to the correct architecture family, or board, and the structure underneath that
 * parent should be identical.
 *
 * of course there are other, perhaps better, ways to do this, but this is my path during very early
 * development of my system.
 */
#include "peripheral/ports/ports_api.h"

// ----	Module Headers --------------------------
#include "bsp.h"


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
static char const * const bsp_RevString = "$Revision: 0123 $";


// ============================================================================
// ----	Private Prototypes ----------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Functions ------------------------------------------------------
// ============================================================================

/* Function:
    void BSP_USBVBUSSwitchStateSet(BSP_USB_VBUS_SWITCH_STATE state);

  Summary:
    This function enables or disables the USB VBUS switch on the board.

  Description:
    This function enables or disables the VBUS switch on the board.

  Remarks:
    Refer to bsp_config.h for usage information.
*/
void
BSP_USBVBUSSwitchStateSet(BSP_USB_VBUS_SWITCH_STATE state)
{
    /* Enable the VBUS switch */
    PLIB_PORTS_PinWrite( PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_5, state );
}


/* Function:
    void BSP_Initialize(void)

  Summary:
    Performs the necessary actions to initialize a board

  Description:
    This function initializes the LED, Switch and other ports on the board.
    This function must be called by the user before using any APIs present in
    this BSP.

  Remarks:
    Refer to bsp.h for usage information.
*/
void
BSP_Initialize(void)
{
	/* Setup the USB VBUS Switch Control Pin */
	if(Get(Cwsw_Board, Initialized))
	{
		Set(Cwsw_Board, UsbVbus, kBrdUsbVbusSwitchState_Disable);

		/* Switch off LEDs */
		SET(BspActivity1, kLogicalOff);
		SET(BspActivity2, kLogicalOff);
		SET(BspActivity3, kLogicalOff);
	}
}
