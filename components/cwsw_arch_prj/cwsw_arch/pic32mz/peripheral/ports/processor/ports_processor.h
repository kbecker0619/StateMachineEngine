/** @file
 *	@brief	MCU selector.
 *
 *	Description:
 *	This file is nothing more than a container for all known MCU headers, and provides a method to
 *	select the header appropriate for the build target.
 *
 *	Copyright (c) 2018 Kevin L. Becker. All rights reserved.
 *
 *	Original:
 *	Created on: Dec 28, 2017
 *	Author: kbecker
 *
 *	Current:
 *	$Revision: $
 *	$Date: $
 */

#ifndef PORTS_PROCESSOR_H_
#define PORTS_PROCESSOR_H_

#ifdef	__cplusplus
extern "C" {
#endif

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

#include "projcfg.h"

// ----	System Headers --------------------------

// ----	Project Headers -------------------------

// ----	Module Headers --------------------------
#if (XPRJ_Debug_Win_MinGW) || (XPRJ_Debug_Linux_GCC)
#include "ports_api.h"

#elif (XPRJ_Debug_Win_MZ2048EFM)
//#include "ports_p32mz2048efm144.h"	/* klb: skip 2nd-level selector used by Microchip; go directly to known header */

#else
#error Unknown MCU
#endif


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================
#define PORTS_PROCESSOR_H__REVSTRING "$Revision: 0123 $"


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

#endif /* PORTS_PROCESSOR_H_ */
