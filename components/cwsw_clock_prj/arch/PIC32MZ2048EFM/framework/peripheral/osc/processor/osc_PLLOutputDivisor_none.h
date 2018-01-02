/** @file
 *	@brief	OSC PLIB Template Implementation.
 *
 *	Description:
 *	This header file contains template implementations
 *	For Feature : PLLOutputDivisor
 *	and its Variant : PIC32_2
 *	For following APIs :
 *		PLIB_OSC_ExistsSysPLLOutputDivisor
 *		PLIB_OSC_SysPLLOutputDivisorSet
 *		PLIB_OSC_SysPLLOutputDivisorGet
 *
 *	Copyright (c) 2018 Kevin L. Becker. All rights reserved.
 *
 *	Original:
 *	Created on: Dec 31, 2017
 *	Author: kbecker
 *
 *	Current:
 *	$Revision: $
 *	$Date: $
 */

#ifndef OSC_PLLOUTPUTDIVISOR_NONE_H_
#define OSC_PLLOUTPUTDIVISOR_NONE_H_

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
#define OSC_PLLOUTPUTDIVISOR_NONE_H__REVSTRING "$Revision: 0123 $"


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public API ------------------------------------------------------------
// ============================================================================

/* Function :  OSC_SysPLLOutputDivisorSet_PIC32_2

  Summary:
    Implements PIC32_2 variant of PLIB_OSC_SysPLLOutputDivisorSet

  Description:
    This template implements the PIC32_2 variant of the PLIB_OSC_SysPLLOutputDivisorSet function.
*/
PLIB_TEMPLATE void
OSC_SysPLLOutputDivisorSet_PIC32_2(OSC_MODULE_ID index, OSC_SYSPLL_OUT_DIV PLLOutDiv)
{
	UNUSED(index);
	UNUSED(PLLOutDiv);
//	SPLLCONbits.PLLODIV = PLLOutDiv;
}



#ifdef	__cplusplus
}
#endif

#endif /* OSC_PLLOUTPUTDIVISOR_NONE_H_ */
