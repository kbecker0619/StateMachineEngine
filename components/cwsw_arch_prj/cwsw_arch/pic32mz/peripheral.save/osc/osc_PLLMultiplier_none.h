/** @file osc_PLLMultiplier_PIC32_2.h
 *	@brief	One-sentence short description of file.
 *
 *	Description:
 *
 *	Copyright (c) 2018 Kevin L. Becker. All rights reserved.
 *
 *	Original:
 *	Created on: Dec 30, 2017
 *	Author: kbecker
 *
 *	Current:
 *	$Revision: $
 *	$Date: $
 */

#ifndef OSC_PLLMULTIPLIER_PIC32_2_H_
#define OSC_PLLMULTIPLIER_PIC32_2_H_

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
#include "peripheral_common.h"

// ----	Module Headers --------------------------


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================
#define OSC_PLLMULTIPLIER_PIC32_2_H__REVSTRING "$Revision: 0123 $"


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

/* Oscillator System PLL Multiplier Value Type

  Summary:
    Type of the oscillator system PLL multiplier value.

  Description:
    This macro defines the type of the oscillator system PLL multiplier value.

  Remarks:
    None
*/
#define OSC_SYSPLL_MULTIPLIER_TYPE						SFR_TYPE


// ============================================================================
// ----	Public Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public API ------------------------------------------------------------
// ============================================================================

/* Function :  OSC_SysPLLMultiplierSelect_PIC32_2

  Summary:
    Implements PIC32_2 variant of PLIB_OSC_SysPLLMultiplierSelect

  Description:
    This template implements the PIC32_2 variant of the PLIB_OSC_SysPLLMultiplierSelect function.
*/
static PLIB_TEMPLATE void
OSC_SysPLLMultiplierSelect_PIC32_2(OSC_MODULE_ID index, OSC_SYSPLL_MULTIPLIER_TYPE pll_multiplier)
{
	UNUSED(index);
    if(pll_multiplier < 129u)
    {
//        SPLLCONbits.PLLMULT = (pll_multiplier - 1u);
    }
    else
    {
        PLIB_ASSERT(false, "Given PLL Multiplier value is not supported for the selected device");
    }
}


#ifdef	__cplusplus
}
#endif

#endif /* OSC_PLLMULTIPLIER_PIC32_2_H_ */
