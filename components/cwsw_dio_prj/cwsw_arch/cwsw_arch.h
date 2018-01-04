/** @file
 *	@brief	One-sentence short description of file.
 *
 *	Description:
 *
 *	Copyright (c) 2018 Kevin L. Becker. All rights reserved.
 *
 *	Original:
 *	Created on: Jan 3, 2018
 *	Author: kbecker
 *
 *	Current:
 *	$Revision: $
 *	$Date: $
 */

#ifndef CWSW_ARCH_CWSW_ARCH_H_
#define CWSW_ARCH_CWSW_ARCH_H_

#ifdef	__cplusplus
extern "C" {
#endif

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

#include "projcfg.h"

// ----	System Headers --------------------------
#include <stdint.h>

// ----	Project Headers -------------------------
#include "cwsw_lib.h"

// ----	Module Headers --------------------------


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================
#define ARCH_CWSW_ARCH_H__REVSTRING "$Revision: 0123 $"


// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public API ------------------------------------------------------------
// ============================================================================

#if (XPRJ_Debug_Win_MinGW)
extern uint16_t Arch__Init(void);

#elif (XPRJ_Debug_Win_MZ2048EFM)
#define Arch__Init()	Arch__Init__Pic32Mz()
extern uint16_t Arch__Init__Pic32Mz(void);

#else
extern uint16_t Arch__Init(void);

#endif


#ifdef	__cplusplus
}
#endif

#endif /* CWSW_ARCH_CWSW_ARCH_H_ */
