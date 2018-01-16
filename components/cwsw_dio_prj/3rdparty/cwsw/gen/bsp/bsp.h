/** @file bsp.h
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

#ifndef BSP_BSP_H_
#define BSP_BSP_H_

#ifdef	__cplusplus
extern "C" {
#endif

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

#include "projcfg.h"

// ----	System Headers --------------------------

// ----	Project Headers -------------------------
#include "cwsw_lib.h"

// ----	Module Headers --------------------------


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================
#define BSP_CWSW_BSP_H__REVSTRING "$Revision: 0123 $"

/** Identification for the LED indicators supported by this BSP.
 * These values are intended to be used by this own module, and all those above it (e.g., the
 * application itself).
 *
 * i've tried (and usually prefer) enumerations, but for the moment, the more difficult use case,
 * and (my perception) of the more commonly used one, is to use defines. i've tried building w/
 * these as enums, and that works fine.
 */
#if 0
#define kBspActivity1 	kBoardLed1
#define kBspActivity2	kBoardLed2
#define kBspActivity3	kBoardLed3
/* note: because there could be mapping differences between the purpose of an LED on this BSP,
 * and the led provided by the board, we cannot simply assume that the LEDs will be assigned
 * contiguously and starting from value 0, so we need to manually maintain the number of LEDs
 * used in this BSP. The value used here should be a base-1 count of the number of LEDs used.
 */
#define kBspNumLeds 	1

typedef uint8_t tBpsIndicatorLed;

#else
enum eBpsIndictorLed {
	kBspActivity1, kBspActivity2, kBspActivity3,

	/* note: because there could be mapping differences between the purpose of an LED on this BSP,
	 * and the led provided by the board, we cannot simply assume that the LEDs will be assigned
	 * contiguously and starting from value 0, so we need to manually maintain the number of LEDs
	 * used in this BSP. The value used here should be a base-1 count of the number of LEDs used.
	 */
	kBspNumLeds = 3
};

typedef enum eBpsIndictorLed tBpsIndicatorLed;

#endif


typedef enum
{
    /* USB VBUS Switch disable */
    BSP_USB_VBUS_SWITCH_STATE_DISABLE = /*DOM-IGNORE-BEGIN*/0/*DOM-IGNORE-END*/,

    /* USB VBUS Switch enable */
    BSP_USB_VBUS_SWITCH_STATE_ENABLE = /*DOM-IGNORE-BEGIN*/1/*DOM-IGNORE-END*/

} BSP_USB_VBUS_SWITCH_STATE;


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public API ------------------------------------------------------------
// ============================================================================

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

/* Function:
    void BSP_USBVBUSSwitchStateSet(BSP_USB_VBUS_SWITCH_STATE state);

  Summary:
    This function enables or disables the USB VBUS switch on the board.

  Description:
    This function enables or disables the VBUS switch on the board.

  Precondition:
    BSP_Initialize() should have been called.

  Parameters:
    state - If BSP_USB_VBUS_SWITCH_STATE_ENABLE, then the USB VBUS switch is
            enabled and VBUS is supplied on the USB.
            If BSP_USB_VBUS_SWITCH_STATE_DISABLE, then the USB VBUS
            switch is disabled and VBUS is not supplied on the USB.

  Returns:
    None.

  Example:
    <code>

    // Initialize the BSP
    BSP_Initialize();

    // Enable the VBUS switch.
    BSP_USBVBUSSwitchStateSet(BSP_USB_VBUS_SWITCH_STATE_ENABLE);

    </code>

  Remarks:
    None
*/
extern void BSP_USBVBUSSwitchStateSet(BSP_USB_VBUS_SWITCH_STATE state);


/** Target symbol for Get(Cwsw_Board, Resource) interface */
#define Cwsw_Bsp__Get(resource)				Cwsw_Bsp__Get_ ## resource()

/** Target symbol for Set(Cwsw_Board, Resource, xxx) interface */
#define Cwsw_Bsp__Set(resource, value)		Cwsw_Bsp__Set_ ## resource(value)

/* Target for some of the expansions to the Set(Cwsw_Bsp, Resource, xxx) interface. */
#include "cwsw_bsp.h"		/* tDO_LogicalValues */
extern void Cwsw_Bsp__Set_BspActivity1(tDO_LogicalValues onoff);
extern void Cwsw_Bsp__Set_BspActivity2(tDO_LogicalValues onoff);
extern void Cwsw_Bsp__Set_BspActivity3(tDO_LogicalValues onoff);



/* Targets for expansion of SET(GlobalResource, Value) interface.
 * In this module, the LEDs are considered global resources, "owned" by the BSP,
 * which can be set (written to) by any application-layer module.
 */
#define SET_BspActivity1(value)		Set(Cwsw_Bsp, BspActivity1, kLogicalOff)
#define SET_BspActivity2(value)		Set(Cwsw_Bsp, BspActivity2, kLogicalOff)
#define SET_BspActivity3(value)		Set(Cwsw_Bsp, BspActivity3, kLogicalOff)


#ifdef	__cplusplus
}
#endif

#endif /* BSP_BSP_H_ */
