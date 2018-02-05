/** @file
 *	@brief	One-sentence short description of file.
 *
 *	Description:
 *
 *	Copyright (c) 2018 Kevin L. Becker. All rights reserved.
 *
 *	Original:
 *	Created on: Jan 27, 2018
 *	Author: kbecker
 *
 *	Current:
 *	$Revision: $
 *	$Date: $
 */

#ifndef CWSW_ARCH_I386_SYSTEM_CLK_SRC_SYS_CLK_LOCAL_H_
#define CWSW_ARCH_I386_SYSTEM_CLK_SRC_SYS_CLK_LOCAL_H_

#ifdef	__cplusplus
extern "C" {
#endif

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

#include "projcfg.h"

// ----	System Headers --------------------------
#include <stdint.h>
#include <stdbool.h>

// ----	Project Headers -------------------------

// ----	Module Headers --------------------------


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================
#define CWSW_ARCH_I386_SYSTEM_CLK_SRC_SYS_CLK_LOCAL_H__REVSTRING "$Revision: 0123 $"


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

/* Oscillator System Service Hardware Instance Object

  Summary:
    Defines the object required for the maintenance of the hardware.

  Description:
    This defines the object required for the maintenance of the hardware.

  Remarks:
    None.
*/
typedef void (*SYS_CLK_ERROR_HANDLER)(void);

typedef struct _SYS_CLK_OBJ_STRUCT
{
    /* This variable holds the system clock value.
     * It is also used to calculate the other clocks which are derived from the system clock
     */
    uint32_t systemClock;

    /* Save the clock frequency which is closest to the previously requested frequency */
//    uint32_t systemClosestClock;
//    /* System clock source */
//   CLK_SOURCES_SYSTEM systemClockSource;
//    /* Status of the previous System clock Operation */
//    SYS_CLK_STATUS systemClockStatus;
//    /* This variable holds the peripheral clock value.  */
//    uint32_t peripheralClock[PERIPHERAL_BUSES_MAX];
//    SYS_CLK_STATUS peripheralClockStatus[PERIPHERAL_BUSES_MAX];
//    uint32_t peripheralClosestClock[PERIPHERAL_BUSES_MAX];
//    /* This variable holds the USB clock value.  */
//    uint32_t usbClock[USB_BUSES_MAX];
//    SYS_CLK_STATUS usbClockStatus[USB_BUSES_MAX];
//    uint32_t usbClosestClock[USB_BUSES_MAX];
//    /* This variable holds the Reference clock value. */
//    uint32_t referenceClock[REFERENCE_BUSES_MAX];
//    SYS_CLK_STATUS referenceClockStatus[REFERENCE_BUSES_MAX];
//    uint32_t referenceClosestClock[REFERENCE_BUSES_MAX];
    SYS_CLK_ERROR_HANDLER callback;

} SYS_CLK_OBJECT;


// ============================================================================
// ----	Public Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public API ------------------------------------------------------------
// ============================================================================


#ifdef	__cplusplus
}
#endif

#endif /* CWSW_ARCH_I386_SYSTEM_CLK_SRC_SYS_CLK_LOCAL_H_ */
