/** @file
 *	@brief	Common interface definitions for the Operating System Abstraction Layer (OSAL).
 *
 *	Description:
 *	This file defines the common interface to the Operating System
 *	Abstraction Layer. It defines the common types used by the OSAL
 *	and defines the function prototypes. Depending upon the OSAL mode,
 *	a support level specific implementation file is included by this
 *	file to give the required level of compatibility. The available
 *	support levels include, OSAL_USE_NONE, OSAL_USE_BASIC, and
 *	OSAL_USE_RTOS.
 *
 *
 *	Original:
 *	Created on: Dec 25, 2017
 *	Author: kbecker
 *
 *	Current:
 *	$Revision: $
 *	$Date: $
 */

#ifndef ARCH_PIC32MZ2048EFM_FRAMEWORK_OSAL_OSAL_H_
#define ARCH_PIC32MZ2048EFM_FRAMEWORK_OSAL_OSAL_H_

#ifdef	__cplusplus
extern "C" {
#endif

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

// ----	System Headers --------------------------

// ----	Project Headers -------------------------
/* Each OSAL type (Full, Basic and none) will have a set of basic types
 * dependent upon the OS being used. This conditional block allows the
 * default set of types to be used or the RTOS specific type
*/
#include "system_config.h"
#include "osal/osal_definitions.h"

// ----	Module Headers --------------------------


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================
#define ARCH_PIC32MZ2048EFM_FRAMEWORK_OSAL_OSAL_H__REVSTRING "$Revision: 0123 $"


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public API ------------------------------------------------------------
// ============================================================================


#ifdef	__cplusplus
}
#endif

#endif /* ARCH_PIC32MZ2048EFM_FRAMEWORK_OSAL_OSAL_H_ */
