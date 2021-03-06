/** @file
 *	@brief	Board Support Package Header File for PIC32MZ Embedded Connectivity (EF) Starter Kit.
 *
 *	Description:
 *	This file contains constants, macros, type definitions and function
 *	declarations required by the PIC32MZ Embedded Connectivity (EC) Starter Kit.
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
/* klb: patchify MCH-generated code to make it work in Eclipse w/ multiple build targets */
#if (XPRJ_Debug_Win_MZ2048EFM)
//#include <xc.h>				<<== klb: TEMPORARY! ONLY DURING EARLY BUILDUP
#endif
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>


// ----	Project Headers -------------------------
/* note: while i personally strongly agree with the coding guideline that says, "no path statements
 * in include statements", i am doing that here in my early attempt to support multiple MCU
 * architectures and multiple boards; in my idea, the include paths specified on the command line
 * should point to the correct architecture family, or board, and the structure underneath that
 * parent should be identical.
 *
 * of course there are other, perhaps better, ways to do this, but this is my path during very early
 * development of my system.
 */
#include "peripheral/ports/plib_ports.h"

// ----	Module Headers --------------------------


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================
#define CWSW_BOARD_H_REVSTRING "$Revision: 0123 $"

/** Logical values for the LEDs and switches.
 *	Note the actual wiring on the board, or the polarity of the driver, might be inverted;
 *	that connection is made at the driver level, not the board level.
 */
enum eDO_Logical_Values { kLogicalOff, kLogicalOn };


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
enum eBrdSwitch
{
    kBrdSwitch1 = 0,
	kBrdSwitch2 = 1,
	kBrdSwitch3 = 2
};

/** tBoardLed.
 * Summary:
 *	Defines the LEDs available on this board.
 * Description:
 * 	This enumeration defines the LEDs available on this board.
 * Remarks:
 * 	None.
 */
enum eBoardLeds
{
    kBoardLed1,
	kBoardLed2,
	kBoardLed3,
	kBoardNumLeds
};


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

typedef enum eDO_Logical_Values		tDO_LogicalValues;

typedef enum eBrdUsbVbusSwitchState	tBrdUsbVbusSwitchState;
typedef enum eBrdSwitch				tBrdUserSwitch;
//typedef enum eBSP_SWITCH_STATE	tBrdUserSwitchState;

typedef enum eBoardLeds					tBoardLed;


// ============================================================================
// ----	Public Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public API ------------------------------------------------------------
// ============================================================================

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

/* Function:
    void BSP_Initialize(void)

  Summary:
    Performs the necessary actions to initialize a board

  Description:
    This function initializes the LED and Switch ports on the board.  This
    function must be called by the user before using any APIs present on this
    BSP.

  Precondition:
    None.

  Parameters:
    None

  Returns:
    None.

  Example:
    <code>
    //Initialize the BSP
    BSP_Initialize();
    </code>

  Remarks:
    None
*/
extern void BSP_Initialize(void);


// --- targets for get/set/etc macros -----------------------------------------
/** "Chapter Designator" for Get/Set API.
 *	Intentionally unused symbol, designed to get you to the correct starting
 *	point, when you want to find macros for the Get/Set API; simply highlight
 *	the Module argument, and select Go To Definition.
 */
enum { Cwsw_Board };	/* PIC32 MZ EZ Board */


/** Target symbol for Get(Cwsw_Board, Resource) interface */
#define Cwsw_Board__Get(resource)				Cwsw_Board__Get_ ## resource()

/** Target symbol for Set(Cwsw_Board, Resource, xxx) interface */
#define Cwsw_Board__Set(resource, value)		Cwsw_Board__Set_ ## resource(value)


/** Target for Get(Cwsw_Arch, Initialized) interface */
extern bool 									Cwsw_Board__Get_Initialized(void);


/* Target for some of the expansions to the Set(Cwsw_Board, Resource, xxx) interface */
#define Cwsw_Board__Set_UsbVbus(value)			Cwsw_Board__UsbVbusSwitchStateSet(value)


/* Target for some of the expansions to the Set(Cwsw_Board, Resource, xxx) interface. */
#include "bsp.h"
#define Cwsw_Board__Set_kBoardLed1(value)		do { if(!!(value)) { BSP_LEDOn(kBoardLed1); } else { BSP_LEDOff(kBoardLed1); } } while(0)
#define Cwsw_Board__Set_kBoardLed2(value)		do { if(!!(value)) { BSP_LEDOn(kBoardLed2); } else { BSP_LEDOff(kBoardLed2); } } while(0)
#define Cwsw_Board__Set_kBoardLed3(value)		do { if(!!(value)) { BSP_LEDOn(kBoardLed3); } else { BSP_LEDOff(kBoardLed3); } } while(0)

/* Target for some of the expansions to the Get(Cwsw_Board, Resource) interface. */
#define Cwsw_Board__Get_kBoardLed1()			BSP_LEDStateGet(kBoardLed1)


#ifdef	__cplusplus
}
#endif

#endif /* CWSW_BOARD_H */
