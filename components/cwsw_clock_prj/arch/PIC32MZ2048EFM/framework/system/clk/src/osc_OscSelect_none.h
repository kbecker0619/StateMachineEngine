/** @file
 *	@brief	OSC PLIB Template Implementation.
 *
 *	Description:
 *	This header file contains template implementations
 *	For Feature : OscSelect
 *	and its Variant : Mz
 *	For following APIs :
 *		PLIB_OSC_ExistsOscSelect
 *		PLIB_OSC_SysClockSelect
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
 *	Created on: Dec 29, 2017
 *	Author: kbecker
 *
 *	Current:
 *	$Revision: $
 *	$Date: $
 */

#ifndef OSC_OSCSELECT_MZ_H_
#define OSC_OSCSELECT_MZ_H_

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
#define OSC_OSCSELECT_MZ_H__REVSTRING "$Revision: 0123 $"

/* Low power RC Oscillator clock frequency

  Summary:
    Sets up the low power RC oscillator clock frequency

  Description:
    This macro sets up the low power RC oscillator clock frequency.

  Remarks:
    None
*/

#define SYS_CLK_LPRC_CLOCK						32768

/* Fast RC clock frequency

  Summary:
    Sets up the Fast RC oscillator clock frequency

  Description:
    This macro sets up the Fast RC oscillator clock frequency.

  Remarks:
    None
*/
#define SYS_CLK_FRC_CLOCK						8000000L


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

#endif /* OSC_OSCSELECT_MZ_H_ */
