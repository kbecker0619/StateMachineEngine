/** @file MPC57xx__Interrupt_Init.h
 *	@brief	One-sentence short description of file.
 *
 *	Description:
 *
 *	Copyright (c) 2018 Kevin L. Becker. All rights reserved.
 *
 *	Original:
 *	Created on: Feb 8, 2018
 *	Author: kbecker
 *
 *	Current:
 *	$Revision: $
 *	$Date: $
 */

#ifndef CWSW_ARCH_MPC57XX_SYSTEM_INT_MPC57XX__INTERRUPT_INIT_H_
#define CWSW_ARCH_MPC57XX_SYSTEM_INT_MPC57XX__INTERRUPT_INIT_H_

#ifdef	__cplusplus
extern "C" {
#endif

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

#include "projcfg.h"
#if (XPRJ_Debug_XC_MPC57xx_DevKit)	/* { */

// ----	System Headers --------------------------

// ----	Project Headers -------------------------

// ----	Module Headers --------------------------


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================
#define CWSW_ARCH_MPC57XX_SYSTEM_INT_MPC57XX__INTERRUPT_INIT_H__REVSTRING "$Revision: 0123 $"


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public API ------------------------------------------------------------
// ============================================================================

/* klb: for the next, remove if possible (make static) */
extern void SetIVPR (register unsigned int x);
extern void InitINTC(void);
extern void enableIrq(void);

/* public API */
extern void xcptn_xmpl(void);

#ifdef	__cplusplus
}
#endif

#endif								/* } */
#endif /* CWSW_ARCH_MPC57XX_SYSTEM_INT_MPC57XX__INTERRUPT_INIT_H_ */
