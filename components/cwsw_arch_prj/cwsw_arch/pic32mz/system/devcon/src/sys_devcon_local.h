/** @file
 *	@brief	Device Control System Service local declarations and definitions.
 *
 *	Description:
 *	This file contains the Device Control System Service local declarations and definitions.
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

#ifndef SYS_DEVCON_LOCAL_H_
#define SYS_DEVCON_LOCAL_H_

#ifdef	__cplusplus
extern "C" {
#endif

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

// ----	System Headers --------------------------
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

// ----	Project Headers -------------------------
#include "system_config.h"
#include "../sys_devcon.h"

// ----	Module Headers --------------------------


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================
#define SYS_DEVCON_LOCAL_H__REVSTRING "$Revision: 0123 $"


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

/* SYS DEVCON State Machine States

   Summary
    Defines the various states that can be achieved by the module operation.

   Description
    This enumeration defines the various states that can be achieved by the
    module operation.

   Remarks:
    None.
*/
typedef enum
{
    /* SYS DEVCON state ready */
    SYS_DEVCON_STATE_READY,

    /* SYS DEVCON state busy */
    SYS_DEVCON_STATE_BUSY,

    /* SYS TMR state init */
    SYS_DEVCON_STATE_INIT,

} SYS_DEVCON_STATES;


/* Device Constrol System Service Hardware Instance Object

  Summary:
    Defines the object required for the maintainence of the hardware.

  Description:
    This defines the object required for the maintainence of the hardware.

  Remarks:
    None.
*/

typedef struct
{
    /* Current state of module */
    SYS_DEVCON_STATES state;

    /* Status of SYS DEVCON module */
    SYS_STATUS status;

} SYS_DEVCON_OBJECT;


// ============================================================================
// ----	Public Variables ------------------------------------------------------
// ============================================================================
extern SYS_DEVCON_OBJECT devconObject;


// ============================================================================
// ----	Public API ------------------------------------------------------------
// ============================================================================


#ifdef	__cplusplus
}
#endif

#endif /* SYS_DEVCON_LOCAL_H_ */
