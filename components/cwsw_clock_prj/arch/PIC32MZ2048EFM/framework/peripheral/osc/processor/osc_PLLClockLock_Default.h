/** @file
 *	@brief	One-sentence short description of file.
 *
 *	Description:
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
 *	Created on: Dec 30, 2017
 *	Author: kbecker
 *
 *	Current:
 *	$Revision: $
 *	$Date: $
 */

#ifndef OSC_PLLCLOCKLOCK_DEFAULT_H_
#define OSC_PLLCLOCKLOCK_DEFAULT_H_

#ifdef	__cplusplus
extern "C" {
#endif

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

#include "projcfg.h"

// ----	System Headers --------------------------
#include "cwsw_lib.h"

// ----	Project Headers -------------------------

// ----	Module Headers --------------------------


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================
#define OSC_PLLCLOCKLOCK_DEFAULT_H__REVSTRING "$Revision: 0123 $"


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public API ------------------------------------------------------------
// ============================================================================

/* Function :  OSC_PLLClockIsLocked_Default

  Summary:
    Implements Default variant of PLIB_OSC_PLLClockIsLocked

  Description:
    This template implements the Default variant of the PLIB_OSC_PLLClockIsLocked function.
*/
PLIB_TEMPLATE bool
OSC_PLLClockIsLocked_Default(OSC_MODULE_ID index)
{
	UNUSED(index);
//	return (bool)OSCCONbits.CLKLOCK;
	return true;
}


#ifdef	__cplusplus
}
#endif

#endif /* OSC_PLLCLOCKLOCK_DEFAULT_H_ */