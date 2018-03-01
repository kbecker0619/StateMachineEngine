/** @file
 *	@brief	Top level common system services library interface header.
 *
 *	Description:
 *	This file is the top level common system services library interface header.
 *	It defines (or includes files that define) the common system service
 *	types, prototypes, and other definitions that are commonly used by MPLAB
 *	Harmony libraries and system services.
 *
 *	System services provide common functionality that would otherwise need to
 *	be duplicated by multiple other modules or that would force them to
 *	interact in complex and hard to manage ways.  System services eliminate
 *	conflicts by controlling access shared resources.
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
 *	Created on: Dec 23, 2017
 *	Author: kbecker
 *
 *	Current:
 *	$Revision: $
 *	$Date: $
 */

#ifndef SYSTEM_SYSTEM_H_
#define SYSTEM_SYSTEM_H_

#ifdef	__cplusplus
extern "C" {
#endif

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

// ----	System Headers --------------------------

// ----	Project Headers -------------------------

// ----	Module Headers --------------------------
#include "sys_common.h"
#include "sys_module.h"


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================
#define SYSTEM_H__REVSTRING "$Revision: 0123 $"


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

#endif /* SYSTEM_SYSTEM_H_ */
