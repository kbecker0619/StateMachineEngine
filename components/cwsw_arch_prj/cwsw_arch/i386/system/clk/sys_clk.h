/** @file sys_clk.h
 *	@brief	One-sentence short description of file.
 *
 *	Description:
 *
 *	Copyright (c) 2018 Kevin L. Becker. All rights reserved.
 *
 *	Original:
 *	Created on: Jan 27, 2018
 *	Author: kbecker
 *
 *	Current:
 *	$Revision: $
 *	$Date: $
 */

#ifndef CWSW_ARCH_I386_SYSTEM_CLK_SYS_CLK_H_
#define CWSW_ARCH_I386_SYSTEM_CLK_SYS_CLK_H_

#ifdef	__cplusplus
extern "C" {
#endif

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

#include "projcfg.h"
#if defined(USE_SYS_CLK)			/* { */

// ----	System Headers --------------------------

// ----	Project Headers -------------------------

// ----	Module Headers --------------------------


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================
#define CWSW_ARCH_I386_SYSTEM_CLK_SYS_CLK_H__REVSTRING "$Revision: 0123 $"

/* Clock System Service Reference Oscillator initialization data

  Summary:
    Defines the data required to initialize the Oscillator for the Clock System
    Service.

  Description:
    This structure defines the data required to initialize the Oscillator
    for the Clock System Service.

  Remarks:
    This structure only includes the necessary settings for the clock module.
    Other features like USB clock and reference clock are considered to be
    optional and not every system will use it. There are dedicated APIs for
    configuring those.
*/
#include "system/sys_module.h"		/* SYS_MODULE_INIT */
typedef    struct
{
    /* System module initialization */
    SYS_MODULE_INIT         moduleInit;

} SYS_CLK_INIT;


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public API ------------------------------------------------------------
// ============================================================================

extern void SYS_CLK_Initialize ( const SYS_CLK_INIT *clkInit );


#endif								/* } */

#ifdef	__cplusplus
}
#endif

#endif /* CWSW_ARCH_I386_SYSTEM_CLK_SYS_CLK_H_ */
