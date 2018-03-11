/** @file
 *	@brief	Board Support Package implementation for PIC32MZ Embedded Connectivity (EC) Starter Kit.
 *
 *	Description:
 *	This file contains routines that implement the board support package for
 *	PIC32MZ Embedded Connectivity (EC) Starter Kit.
 *
 *	@note: in my thinking, this file is as close to board customization ala AUTOSAR + Linux Kernel,
 *	as Microchip is likely to get. It's the central location where the various architecture items
 *	are bundled together for the specific board implementation. so, facing "up", the API needs to
 *	stay the same, but facing "down", you make whatever adjustments are necessary to support the
 *	published API.
 *
 *
 *	@note	This file is an as-needed COPY of the file created by Microchip's Harmony Configurator,
 *	v2.04, and/or the tool-created support files (e.g., Peripheral Libs) supplied as part of the
 *	MHC eco system. We have NO intention of stealing code or technology, or of claiming undue
 *	credit. This file is here ONLY during the buildup of support for the PIC32 MZ2048 EFM 144
 *	Starter Kit, what we call the "MZ EZ" board. Eventually, I hope to link directly to Harmony's
 *	code, in a way that allows different target architectures
 *
 *	Anyway, because this is a copy of code generated by a tool owned by Microchip, there is
 *	attribution here but no copyright notice.
 *
 *
 *	Original:
 *	Created on: Dec 27, 2017
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
#include "peripheral/ports/plib_ports.h"

// ----	Module Headers --------------------------
#include "cwsw_board.h"
#include "../cwsw_arch_common.h"



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

static bool initialized = false;

/** Data Structure:
 * 	switch_port_channel_map[]
 *
 * Summary:
 * 	Maps each switch to its port channel
 * Description:
 * 	The switch_port_channel_map array, indexed by BSP_SWITCH, maps each switch
 * 	to its port channel.
 *
 * Remarks:
 * 	Refer to bsp.h for usage information.
*/
static const PORTS_CHANNEL switch_port_channel_map[] =
{
    PORT_CHANNEL_B,
    PORT_CHANNEL_B,
    PORT_CHANNEL_B
};

/** Data Structure:
 * 	switch_port_bit_pos_map[]
 *
 * Summary:
 * 	Maps each switch to its port bit position
 *
 * Description:
 * 	The switch_port_bit_pos_map array, indexed by BSP_SWITCH, maps each switch to its port bit position
 *
 * Remarks:
 * 	Refer to bsp.h for usage information.
*/
//static const PORTS_BIT_POS switch_port_bit_pos_map[] =
//{
//    PORTS_BIT_POS_12,
//    PORTS_BIT_POS_13,
//    PORTS_BIT_POS_14
//};


// ============================================================================
// ----	Private Prototypes ----------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Functions ------------------------------------------------------
// ============================================================================

/** Initialize the board.
 * This function "connects" the board to the CPU.
 * It knows nothing about the application; sitting just above this file, would be the "bsp" (to
 * slightly abuse that term), which connects the application to the board.
 * @return error code, where 0 means no problem.
 *
 * i'm on the fence about embedding a dependency here into the architecture - on the one hand, the
 * BSP (next layer up) should manage this, but on the other hand, the board depends so much upon
 * the capabilities of the MCU on that board, that it doesn't make much sense to execute software
 * to initialize the board, when the micro responsible for executing that very self-same software
 * hasn't yet been initialized.
 */
#include "cwsw_eventsim.h"
uint16_t
Cwsw_Board__Init(void)
{
	tNotificationPayload ev = {0};

	if(Get(Cwsw_Arch, Initialized))
	{
		BSP_Initialize();
		initialized = true;
		return 0;
	}

	SendNotification(evNotInitialized, ev);
	return 1;
}

bool
Cwsw_Board__Get_Initialized(void)
{
	return initialized;
}


/** Function:
 * 	void Cwsw_Board__UsbVbusSwitchStateSet(tBrdUsbVbusSwitchState state);
 *
 * Summary:
 * 	This function enables or disables the USB VBUS switch on the board.
 *
 * Description:
 * 	This function enables or disables the VBUS switch on the board.
 *
 * Remarks:
 * 	Refer to bsp_config.h for usage information.
*/
void
Cwsw_Board__UsbVbusSwitchStateSet(tDO_LogicalValues state)
{
    /* Enable the VBUS switch */
	/* NOTE: for LabWindows/CVI, I would expect this to activate an LED or somesuch indicator */
    PLIB_PORTS_PinWrite( PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_5, state );
}
