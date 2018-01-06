/** @file osc_OscSelect_none.h
 *	@brief	One-sentence short description of file.
 *
 *	Description:
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

#ifndef OSC_OSCSELECT_NONE_H_
#define OSC_OSCSELECT_NONE_H_

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
#define OSC_OSCSELECT_NONE_H__REVSTRING "$Revision: 0123 $"


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public API ------------------------------------------------------------
// ============================================================================

/* Function :  OSC_SysClockSelect_Mz

  Summary:
    Implements Mz variant of PLIB_OSC_SysClockSelect

  Description:
    This template implements the Mz variant of the PLIB_OSC_SysClockSelect function.
*/
PLIB_TEMPLATE void
OSC_SysClockSelect_Mz(OSC_MODULE_ID index, OSC_SYS_TYPE newOsc)
{
	UNUSED(index);

    /* If the selection is either of the two, then the system PLL
       also need to be controlled */
    if ( newOsc == OSC_FRC_WITH_PLL )
    {
//        SPLLCONSET = _SPLLCON_PLLICLK_MASK;
    }
    else if ( newOsc == OSC_PRIMARY_WITH_PLL )
    {
//        SPLLCONCLR = _SPLLCON_PLLICLK_MASK;

        /* Load the value to select the System PLL */
        newOsc = OSC_FRC_WITH_PLL;
    }

//    OSCCONbits.NOSC = newOsc;

    /* Trigger the clock change */
//    OSCCONSET = _OSCCON_OSWEN_MASK;

//    Nop();
//    Nop();
}


#ifdef	__cplusplus
}
#endif

#endif /* OSC_OSCSELECT_NONE_H_ */
