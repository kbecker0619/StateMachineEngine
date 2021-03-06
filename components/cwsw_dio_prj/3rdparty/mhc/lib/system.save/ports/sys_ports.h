/** @file
 *	@brief	Ports System Service interface definitions.
 *
 *	Description:
 *	This file contains the interface definition for the Ports system
 *	service.  It provides a way to interact with the Ports subsystem to
 *	manage the timing requests supported by the system.
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

#ifndef CWSW_ARCH_PIC32MZ_FRAMEWORK_SYSTEM_PORTS_SYS_PORTS_H_
#define CWSW_ARCH_PIC32MZ_FRAMEWORK_SYSTEM_PORTS_SYS_PORTS_H_

#ifdef	__cplusplus
extern "C" {
#endif

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

// ----	System Headers --------------------------

// ----	Project Headers -------------------------

// ----	Module Headers --------------------------


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================
#define ARCH_PIC32MZ2048EFM_FRAMEWORK_SYSTEM_PORTS_SYS_PORTS_H__REVSTRING "$Revision: 0123 $"


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
    void SYS_PORTS_Initialize()

  Summary:
    Initializes PORT Pins/Channels.
	<p><b>Implementation:</b> Static/Dynamic</p>

  Description:
    This function initializes different port pins/channels to the desired state.
    It also remaps the pins to the desired specific function.

  Precondition:
    None.

  Parameters:
    None.

  Returns:
    None.

  Example:
    <code>

	SYS_PORTS_Initialize();

    </code>

  Remarks:
    This API must be be called at the time of system initialization to
	initialize the ports pins.
*/
extern void SYS_PORTS_Initialize();


#ifdef	__cplusplus
}
#endif

#endif /* CWSW_ARCH_PIC32MZ_FRAMEWORK_SYSTEM_PORTS_SYS_PORTS_H_ */
