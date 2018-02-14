/** @file
 *	@brief	Default interrupt handlers for CWSW projects based on the NXP MPC57xx processor.
 *
 *	Description:
 *	This file's primary purpose is to suppress the compiler warnings that erupted when I enabled
 *	"-Wmissing-declarations"
 *
 *
 *	Copyright (c) 2018 Kevin L. Becker. All rights reserved.
 *
 *	Original:
 *	Created on: Feb 11, 2018
 *	Author: kbecker
 *
 *	Current:
 *	$Revision: $
 *	$Date: $
 */

#ifndef CWSW_ARCH_MPC57XX_SYSTEM_INT_INTC_SW_MODE_ISR_VECTORS_MPC5748G_H_
#define CWSW_ARCH_MPC57XX_SYSTEM_INT_INTC_SW_MODE_ISR_VECTORS_MPC5748G_H_

#ifdef	__cplusplus
extern "C" {
#endif

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

#include "projcfg.h"
#if !(XPRJ_Debug_XC_MPC57xx_DevKit)	/* { */
#pragma message "Unknown MCU Architecture"
#endif								/* } */

// ----	System Headers --------------------------

// ----	Project Headers -------------------------

// ----	Module Headers --------------------------


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================
#define CWSW_ARCH_MPC57XX_SYSTEM_INT_INTC_SW_MODE_ISR_VECTORS_MPC5748G_H__REVSTRING "$Revision: 0123 $"


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public API ------------------------------------------------------------
// ============================================================================

extern void PIT0_isr(void);
extern void PIT2_isr(void);
extern void dummy(void);

extern void SW_INT_1_init(void);


#ifdef	__cplusplus
}
#endif

#endif /* CWSW_ARCH_MPC57XX_SYSTEM_INT_INTC_SW_MODE_ISR_VECTORS_MPC5748G_H_ */
