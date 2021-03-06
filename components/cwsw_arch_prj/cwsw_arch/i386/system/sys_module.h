/** @file
 *	@brief	Defines definitions and declarations related to system modules.
 *
 *	Description:
 *	This file defines definitions and interfaces related to system modules.
 *
 *	@note:
 *	This file is included via "system.h" and does not normally need to be included directly.
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
 *	Created on: Jan 6, 2018
 *	Author: kbecker
 *
 *	Current:
 *	$Revision: $
 *	$Date: $
 */

#ifndef SYS_MODULE_H_
#define SYS_MODULE_H_

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
#include "sys_common.h"

// ----	Module Headers --------------------------


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================
#define SYS_MODULE_H__REVSTRING "$Revision: 0123 $"

/* System Module Object Invalid

  Summary:
    Object handle value returned if unable to initialize the requested instance
    of a system module.

  Description:
    This is the object handle value returned if unable to initialize the
    requested instance of a system module.

  Remarks:
    Do not rely on the actual value of this constant.  It may change in future
    implementations.
*/

#define SYS_MODULE_OBJ_INVALID      ((SYS_MODULE_OBJ) -1 )


/* System Module Object Static

  Summary:
    Object handle value returned by static modules.

  Description:
    This is the object handle value returned by static system modules.

  Remarks:
    Do not rely on the actual value of this constant.  It may change in future
    implementations.
*/
#define SYS_MODULE_OBJ_STATIC       ((SYS_MODULE_OBJ) 0 )


/* System Module Power Off State

  Summary:
    Module power-state power off state code.

  Description:
    This value identifies the current power status/state of a system module
    (including device drivers).  It is used to indicate that the module should
    prepare to enter a full power-off state.

  Remarks:
    A power off state indicates that power may be completely removed (0 Volts).

    This value is passed in the powerState field of the SYS_MODULE_INIT
    structure that takes part in all modules initialization and reinitialization.

    The power state codes between SYS_MODULE_POWER_IDLE_RUN (with a value of 3)
    and SYS_MODULE_POWER_RUN_FULL (with a value of 15) are available for
    module-specific definition and usage.
*/
#define SYS_MODULE_POWER_OFF        0


/* System Module Power Sleep State

  Summary:
    Module power-state sleep state code.

  Description:
    This value identifies the current power status/state of a system module
    (including device drivers).  It is used to indicate that the module should
    prepare to enter a sleep state.

  Remarks:
    A Sleep state indicates that the core CPU and peripheral clocks may be
    stopped and no code will execute and any module hardware will be stopped.

    This value is passed in the powerState field of the SYS_MODULE_INIT
    structure that takes part in all modules initialization and reinitialization.

    The power state codes between SYS_MODULE_POWER_IDLE_RUN (with a value of 3)
    and SYS_MODULE_POWER_RUN_FULL (with a value of 15) are available for
    module-specific definition and usage.
*/
#define SYS_MODULE_POWER_SLEEP      1


/* System Module Power Idle-Stop State

  Summary:
    Module power-state idle-stop state code.

  Description:
    This value identifies the current power status/state of a system module
    (including device drivers).  It is used to indicate that the module should
    prepare to enter an idle-stop state.

  Remarks:
    An idle-stop state indicates that the core CPU clock may be stopped, but the
    module's peripheral clock may continue running.  However, the peripheral
    should prepare to stop operations when the idle state is entered.

    This value is passed in the powerState field of the SYS_MODULE_INIT
    structure that takes part in all modules initialization and reinitialization.

    The power state codes between SYS_MODULE_POWER_IDLE_RUN (with a value of 3)
    and SYS_MODULE_POWER_RUN_FULL (with a value of 15) are available for
    module-specific definition and usage.
*/
#define SYS_MODULE_POWER_IDLE_STOP  2


/* System Module Power Idle-Run State

  Summary:
    Module power-state idle-run state code.

  Description:
    This value identifies the current power status/state of a system module
    (including device drivers).  It is used to indicate that the module should
    prepare to enter an idle-run state.

  Remarks:
    An idle-run state indicates that the core CPU clock may be stopped, but the
    module's peripheral clock may continue running and peripheral operations may
    continue as long as no code needs to be executed.  If code needs to execute,
    the module must cause an interrupt.

    This value is passed in the powerState field of the SYS_MODULE_INIT
    structure that takes part in all modules initialization and reinitialization.

    The power state codes between SYS_MODULE_POWER_IDLE_RUN (with a value of 3)
    and SYS_MODULE_POWER_RUN_FULL (with a value of 15) are available for
    module-specific definition and usage.
*/
#define SYS_MODULE_POWER_IDLE_RUN   3


/*
  Summary:
    Module power-state run-full state code.

  Description:
    System Module Power Run-Full State. This value identifies the current power
	status/state of a system module (including device drivers). It is used to
	indicate that the module should prepare to enter an run-full state.

  Remarks:
    An run-full state indicates that the core CPU and peripheral clocks are
    operational at their normal configured speed and the module should be
    ready for normal operation.

    This value is passed in the powerState field of the SYS_MODULE_INIT
    structure that takes part in all modules initialization and
    reinitialization.

    The power state codes between SYS_MODULE_POWER_IDLE_RUN (with a value
    of 3) and SYS_MODULE_POWER_RUN_FULL (with a value of 15) are available
    for module-specific definition and usage.
*/
#define SYS_MODULE_POWER_RUN_FULL   15


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

/* System Module Index

  Summary:
    Identifies which instance of a system module should be initialized or opened.

  Description:
    This data type identifies to which instance of a system module a call to
    that module's "Initialize" and "Open" routines refers.

  Remarks:
    Each individual module will usually define macro names for the index values
    it supports (e.g., DRV_TMR_INDEX_1, DRV_TMR_INDEX_2, ...).
*/
typedef unsigned short int SYS_MODULE_INDEX;


/* System Module Object

  Summary:
    Handle to an instance of a system module.

  Description:
    This data type is a handle to a specific instance of a system module (such
    as a device driver).

  Remarks:
    Code outside of a specific module should consider this as an opaque type
    (much like a void *).  Do not make any assumptions about base type as it
    may change in the future or about the value stored in a variable of this
    type.
*/
#if (XPRJ_Debug_CVI)
typedef char *		SYS_MODULE_OBJ;
#else
typedef uint32_t *SYS_MODULE_OBJ;
#endif


/* System Module Status

  Summary:
    Identifies the current status/state of a system module (including device
    drivers).

  Description:
    This enumeration identifies the current status/state of a system module
    (including device drivers).

  Remarks:
    This enumeration is the return type for the system-level status routine
    defined by each device driver or system module (for example, DRV_I2C_Status).
*/
typedef enum
{
    // Indicates that a non-system defined error has occurred.  The caller
    // must call the extended status routine for the module in question to
    // identify the error.
    SYS_STATUS_ERROR_EXTENDED   = -10,

    /*An unspecified error has occurred.*/
    SYS_STATUS_ERROR            = -1,

    // The module has not yet been initialized
    SYS_STATUS_UNINITIALIZED    = 0,

    // An operation is currently in progress
    SYS_STATUS_BUSY             = 1,

    // Any previous operations have succeeded and the module is ready for
    // additional operations
    SYS_STATUS_READY            = 2,

    // Indicates that the module is in a non-system defined ready/run state.
    // The caller must call the extended status routine for the module in
    // question to identify the state.
    SYS_STATUS_READY_EXTENDED   = 10

} SYS_STATUS;


/* System Module Init

  Summary:
    Initializes a module (including device drivers) in a current power status as
    requested by the system or power manager.

  Description:
    This structure provides the necessary data to initialize or reinitialize
    a module (including device drivers) into a requested power state.
    The structure can be extended in a module specific way as to carry
    module specific initialization data.

  Remarks:
    This structure is used in the device driver routines DRV_<module>_Initialize
    and DRV_<module>_Reinitialize that are defined by each device driver.

    The "powerState" member has several predefined values (shown below).  All
    other available values (within the 4-bit field) are available for
    module-specific meaning.

    Predefined powerState Values:

    - 0.  SYS_MODULE_POWER_OFF        - Module power-state power off state code
    - 1.  SYS_MODULE_POWER_SLEEP      - Module power-state sleep state code
    - 2.  SYS_MODULE_POWER_IDLE_STOP  - Module power-state idle-stop state code
    - 3.  SYS_MODULE_POWER_IDLE_RUN   - Module power-state idle-run state code
    - 4.  through 14.                 - Module-specific meaning
    - 15. SYS_MODULE_POWER_RUN_FULL   - Module power-state run-full state code
*/
typedef union
{
    uint8_t         value;

    struct
    {
        // Requested power state
        uint8_t     powerState  : 4;

        // Module-definable field, module-specific usage
        uint8_t     reserved    : 4;
    } sys;

} SYS_MODULE_INIT;


// ============================================================================
// ----	Public Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public API ------------------------------------------------------------
// ============================================================================


#ifdef	__cplusplus
}
#endif

#endif /* SYS_MODULE_H_ */
