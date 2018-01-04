/** @file driver_common.h
 *	@brief	One-sentence short description of file.
 *
 *	Description:
 *
 *	Copyright (c) 2018 Kevin L. Becker. All rights reserved.
 *
 *	Original:
 *	Created on: Dec 25, 2017
 *	Author: kbecker
 *
 *	Current:
 *	$Revision: $
 *	$Date: $
 */

#ifndef CWSW_ARCH_PIC32MZ_FRAMEWORK_DRIVER_DRIVER_COMMON_H_
#define CWSW_ARCH_PIC32MZ_FRAMEWORK_DRIVER_DRIVER_COMMON_H_

#ifdef	__cplusplus
extern "C" {
#endif

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

// ----	System Headers --------------------------
#include <stdint.h>		/* klb: uintptr_t */

// ----	Project Headers -------------------------

// ----	Module Headers --------------------------


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================
#define ARCH_PIC32MZ2048EFM_FRAMEWORK_DRIVER_DRIVER_COMMON_H__REVSTRING "$Revision: 0123 $"


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

/* Device Handle

  Summary:
    Handle to an opened device driver.

  Description:
    This handle identifies the open instance of a device driver.  It must be
    passed to all other driver routines (except the initialization, deinitialization,
    or power routines) to identify the caller.

  Remarks:
    Every application or module that wants to use a driver must first call
    the driver's open routine.  This is the only routine that is absolutely
    required for every driver.

    If a driver is unable to allow an additional module to use it, it must then
    return the special value DRV_HANDLE_INVALID.  Callers should check the
    handle returned for this value to ensure this value was not returned before
    attempting to call any other driver routines using the handle.
*/

typedef uintptr_t DRV_HANDLE;



// ============================================================================
// ----	Public Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public API ------------------------------------------------------------
// ============================================================================


#ifdef	__cplusplus
}
#endif

#endif /* CWSW_ARCH_PIC32MZ_FRAMEWORK_DRIVER_DRIVER_COMMON_H_ */
