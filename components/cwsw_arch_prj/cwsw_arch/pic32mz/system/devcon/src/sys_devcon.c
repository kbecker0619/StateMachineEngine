/** @file
 *	@brief	Device Control System Service Implementation.
 *
 *	Description:
 *	The DEVCON system service provides a simple interface to manage the Device
 *	Control module on PIC32M Microchip microcontrollers. This file Implements
 *	the core interface routines for the Device Control system service.  While
 *	building the system service from source, ALWAYS include this file in the
 *	build for PIC32M devices.
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
 *	Created on: Dec 23, 2017
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

#include "int/plib_int.h"
#include "osc/plib_osc.h"
#include "sys_devcon_local.h"

// ----	Module Headers --------------------------


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
static char const * const sys_devcon_RevString = "$Revision: 0123 $";

/* System Device Control Instance */
SYS_DEVCON_OBJECT sysDevconObj;


// ============================================================================
// ----	Private Prototypes ----------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Functions ------------------------------------------------------
// ============================================================================

/* Function:
    SYS_MODULE_OBJ SYS_DEVCON_Initialize( const SYS_MODULE_INDEX           index,
                                       const SYS_MODULE_INIT * const    init )

  Summary:
    Initializes data for the instance of the Device Control module and opens
    the specific module instance.

  Description:
    This function initializes the instance of the Device Control module,
    using the specified initialization data. It also initializes any
    internal data structures.

  Remarks:
    This routine should only be called once during system initialization
    unless SYS_DEVCON_Deinitialize is first called to deinitialize the device
    instance before reinitializing it. If the system was already initialized
    it safely returns without causing any disturbance.
*/
SYS_MODULE_OBJ
SYS_DEVCON_Initialize(const SYS_MODULE_INDEX index, const SYS_MODULE_INIT * const init)
{
	UNUSED(index);
	UNUSED(init);
	UNUSED(sys_devcon_RevString);

    sysDevconObj.status = SYS_STATUS_READY;
    sysDevconObj.state = SYS_DEVCON_STATE_READY;
    return (SYS_MODULE_OBJ)SYS_DEVCON_INDEX_0;
}


/* Function:
    void SYS_DEVCON_Reinitialize( SYS_MODULE_OBJ                  object,
                               const SYS_MODULE_INIT * const   init )

   Summary:
    Reinitializes and refreshes the hardware for the instance of the Device
    Control module.

   Description:
    This function reinitializes the instance of the Device Control module using
    the supplied data. It modifies the internal data structure.

   Remarks:
    This operation uses the same initialization data structure as the
    SYS_DEVCON_Initialize operation. This operation can be used to change the
    power state of a DEVCON module. This function can be called multiple times
    to reinitialize the module. This operation uses the same initialization
    data structure as the Initialize operation. This operation can also be
    used to refresh the hardware registers as defined by the initialization
    data.
*/
void
SYS_DEVCON_Reinitialize( SYS_MODULE_OBJ object, const SYS_MODULE_INIT * const init )
{
	UNUSED(object);
	UNUSED(init);

    sysDevconObj.status = SYS_STATUS_READY;
    sysDevconObj.state = SYS_DEVCON_STATE_READY;
}


/* Function:
    void SYS_DEVCON_Deinitialize( SYS_MODULE_OBJ object )

  Summary:
    Deinitializes the specific module instance of the DEVCON module

  Description:
    This function deinitializes the specific module instance disabling its operation
    (and any hardware for driver modules). Resets all of the internal data
    structures and fields for the specified instance to the default settings.

  Remarks:
    Once the Initialize operation has been called, the Deinitialize
    operation must be called before the Initialize operation can be called
    again.
*/
void
SYS_DEVCON_Deinitialize( SYS_MODULE_OBJ object )
{
	UNUSED(object);

    sysDevconObj.status = SYS_STATUS_UNINITIALIZED;
}

