/** @file
 *	@brief	Board Support Package Header File for "none" board - Windows or Linux desktop.
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

#ifndef CWSW_BOARD_H
#define CWSW_BOARD_H

#ifdef	__cplusplus
extern "C" {
#endif

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

#include "projcfg.h"

// ----	System Headers --------------------------
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

// ----	Project Headers -------------------------
/* note: while i personally strongly agree with the coding guideline that says,
 * "no path statements in include statements", i am doing that here in my early
 * attempt to support multiple MCU architectures and multiple boards; in my idea,
 * the include paths specified on the command line should point to the correct
 * board family, or board, and the published structure should be identical
 * across all boards.
 *
 * of course there are other, perhaps better, ways to do this, but this is my path during very early
 * development of my system.
 */
#include "peripheral/ports/ports_api.h"

// ----	Module Headers --------------------------
#include "../cwsw_board_common.h"

#if (XPRJ_Debug_CVI)
#include "cwsw_dio_uir.h"		/* CVI's control defines (PANEL_LED1, PANEL_BTN_1, et. al. */
#endif


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================
#define CWSW_BOARD_H_REVSTRING "$Revision: 0123 $"


/** USB VBUS Switch State.
 * Summary:
 * 	Defines the possible states of the USB VBUS Switch on this board
 *
 * Description:
 * 	This enumeration defines the possible states of the USB VBUS Switch on this
 * 	board.
 *
 * Remarks:
 * 	None.
 */
enum eBrdUsbVbusSwitchState
{
	/* USB VBUS Switch disable */
	kBrdUsbVbusSwitchState_Disable = 0,

	/* USB VBUS Switch enable */
	kBrdUsbVbusSwitchState_Enable = 1
};

/** BSP Switch.
 *
 * Summary:
 * 	Defines the switches available on this board.
 *
 * Description:
 * 	This enumeration defines the switches available on this board.
 *
 * Remarks:
 * 	None.
 */
#if (XPRJ_Debug_CVI)
enum eBrdSwitch
{
	kBrdSwitch1 = PANEL_BTN_1,
	kBrdSwitch2 = PANEL_BTN_2,
	kBrdSwitch3 = PANEL_BTN_3,
	kBrdNumSwitches = 3
};

#else
enum eBrdSwitch
{
	kBrdSwitch1,
	kBrdSwitch2,
	kBrdSwitch3,
	kBrdNumSwitches = 3
};

#endif


/** tBoardLed.
 * Summary:
 *	Defines the LEDs available on this board.
 * Description:
 * 	This enumeration defines the LEDs available on this board.
 * Remarks:
 * 	None.
 */
#if (XPRJ_Debug_CVI)
enum eBoardLeds
{
	kBoardLed1 = PANEL_LED1,
	kBoardLed2 = PANEL_LED2,
	kBoardLed3 = PANEL_LED3,
	kBoardNumLeds = 3
};

#else
enum eBoardLeds
{
	kBoardLed1,
	kBoardLed2,
	kBoardLed3,
	kBoardNumLeds = 3
};

#endif


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

typedef enum eBrdUsbVbusSwitchState	tBrdUsbVbusSwitchState;
typedef enum eBrdSwitch				tBrdUserSwitch;
//typedef enum eBSP_SWITCH_STATE	tBrdUserSwitchState;

typedef enum eBoardLeds				tBoardLed;


// ============================================================================
// ----	Public Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public API ------------------------------------------------------------
// ============================================================================

// --- discrete functions -----------------------------------------------------

/* Function:
	void Cwsw_Board__UsbVbusSwitchStateSet(tBrdUsbVbusSwitchState state);

  Summary:
	This function enables or disables the USB VBUS switch on the board.

  Description:
	This function enables or disables the VBUS switch on the board.

  Precondition:
	BSP_Initialize() should have been called.

  Parameters:
	state - If kBrdUsbVbusSwitchState_Enable, then the USB VBUS switch is
			enabled and VBUS is supplied on the USB.
			If kBrdUsbVbusSwitchState_Disable, then the USB VBUS
			switch is disabled and VBUS is not supplied on the USB.

  Returns:
	None.

  Example:
	<code>

	// Initialize the BSP
	BSP_Initialize();

	// Enable the VBUS switch.
	Cwsw_Board__UsbVbusSwitchStateSet(kBrdUsbVbusSwitchState_Enable);

	</code>

  Remarks:
	None
*/
extern void Cwsw_Board__UsbVbusSwitchStateSet(tDO_LogicalValues state);

/* Function:
	tBrdUserSwitchState BSP_SwitchStateGet(tBrdUserSwitch switch);

  Summary:
	Returns the present state (pressed or not pressed) of the specified switch.

  Description:
	This function returns the present state (pressed or not pressed) of the
	specified switch.

  Precondition:
	BSP_Initialize() should have been called.

  Parameters:
	switch  - The switch whose state needs to be obtained.

  Returns:
	The pressed released state of the switch.

  Example:
	<code>

	// Initialize the BSP
	BSP_Initialize();

	// Check the state of the switch.
	if(BSP_SWITCH_STATE_PRESSED == BSP_SwitchStateGet(kBrdSwitch1))
	{
		// This means that Switch 1 on the board is pressed.
	}

	</code>

  Remarks:
	None
*/
//extern tBrdUserSwitchState BSP_SwitchStateGet(tBrdUserSwitch bspSwitch);


// --- targets for get/set/etc macros -----------------------------------------

/* Target for some of the expansions to the Set(Cwsw_Board, Resource, xxx) interface */
#define Cwsw_Board__Set_UsbVbus(value)			Cwsw_Board__UsbVbusSwitchStateSet(value)


/* Target for some of the expansions to the Set(Cwsw_Board, Resource, xxx) interface. */
#define Cwsw_Board__Set_kBoardLed1(value)		PLIB_PORTS_PinWrite(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_0, value)
#define Cwsw_Board__Set_kBoardLed2(value)		PLIB_PORTS_PinWrite(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_1, value)
#define Cwsw_Board__Set_kBoardLed3(value)		PLIB_PORTS_PinWrite(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_2, value)
//#define Cwsw_Board__Set_kBoardLed2(value)		do { if(!!(value)) { BSP_LEDOn(kBoardLed2); } else { BSP_LEDOff(kBoardLed2); } } while(0)

/* Target for some of the expansions to the Get(Cwsw_Board, Resource) interface. */
#define Cwsw_Board__Get_kBrdSwitch1()			PLIB_PORTS_PinGet(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_3)
#define Cwsw_Board__Get_kBoardLed1()			PLIB_PORTS_PinGet(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_0)


#ifdef	__cplusplus
}
#endif

#endif /* CWSW_BOARD_H */
