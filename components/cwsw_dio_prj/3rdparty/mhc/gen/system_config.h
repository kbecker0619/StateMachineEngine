/** @file
 *	@brief	Build-time configuration header for the system defined by this MPLAB Harmony
    project.
 *
 *	Description:
 *	An MPLAB Project may have multiple configurations.  This file defines the
 *	build-time options for a single configuration.
 *
 *	Remarks:
 *	This configuration header must not define any prototypes or data
 *	definitions (or include any files that do).  It only provides macro
 *	definitions for build-time configuration options that are not instantiated
 *	until used by another MPLAB Harmony module or application.
 *
 *	Created with MPLAB Harmony Version 2.04
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
 *	Created on: Dec 21, 2017
 *	Author: kbecker
 *
 *	Current:
 *	$Revision: $
 *	$Date: $
 */

#ifndef SYSTEM_CONFIG_H_
#define SYSTEM_CONFIG_H_

#ifdef	__cplusplus
extern "C" {
#endif

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

// ----	System Headers --------------------------

// ----	Project Headers -------------------------

// ----	Module Headers --------------------------


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================
#define SYSTEM_CONFIG_H__REVSTRING "$Revision: 0123 $"

#define SYS_CLK_CONFIG_PRIMARY_XTAL         24000000ul
#define SYS_CLK_CONFIG_SECONDARY_XTAL       32768ul
#define SYS_CLK_CONFIG_FREQ_ERROR_LIMIT     10

/*** Interrupt System Service Configuration ***/
#define SYS_INT                    			true

/*** Timer System Service Configuration ***/
#define SYS_TMR_POWER_STATE					SYS_MODULE_POWER_RUN_FULL
#define SYS_TMR_DRIVER_INDEX	            DRV_TMR_INDEX_0
#define SYS_TMR_MAX_CLIENT_OBJECTS  	    5
#define SYS_TMR_FREQUENCY       	        1000
#define SYS_TMR_FREQUENCY_TOLERANCE     	10
#define SYS_TMR_UNIT_RESOLUTION				10000
#define SYS_TMR_CLIENT_TOLERANCE			10
#define SYS_TMR_INTERRUPT_NOTIFICATION		false


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

#endif /* SYSTEM_CONFIG_H_ */
