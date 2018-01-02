/** @file
 *	@brief	This file contains source code necessary to initialize the system.
 *
 *	Description:
 *	This file contains source code necessary to initialize the system.  It
 *	implements the "SYS_Initialize" function, defines the configuration bits,
 *	and allocates any necessary global system resources, such as the
 *	sysObj structure that contains the object handles to all the MPLAB Harmony
 *	module objects in the system.
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

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

#include "projcfg.h"

// ----	System Headers --------------------------

// ----	Project Headers -------------------------
#include "cwsw_lib.h"
#include "system_config.h"
#include "system_definitions.h"

// ----	Module Headers --------------------------


// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Global Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Module-level Variables ------------------------------------------------
// ============================================================================
static char const * const system_init_RevString = "$Revision: 0123 $";


// ============================================================================
// ----	Private Prototypes ----------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Functions ------------------------------------------------------
// ============================================================================

void
SYS_Initialize( void *data )
{
	UNUSED(data);
	UNUSED(system_init_RevString);

	do {	    /* Core Processor Initialization */
		/* klb: todo: move this to architecture-specific section */
		SYS_CLK_Initialize( NULL );
//		SYS_DEVCON_Initialize(SYS_DEVCON_INDEX_0, (SYS_MODULE_INIT*)NULL);
//		SYS_DEVCON_PerformanceConfig(SYS_CLK_SystemFrequencyGet());
//		SYS_PORTS_Initialize();
	} while(0);

	do {		/* Board Support Package Initialization */
		BSP_Initialize();
	} while(0);

	do {		/* Initialize Drivers */

	} while(0);

	do {		/* Initialize System Services */

	} while(0);

	do {		/* Initialize Middleware */

	} while(0);

	do {		/* Enable Global Interrupts */
//		SYS_INT_Enable();
	} while(0);

	do {		/* Initialize the Application */
//		APP_Initialize();
	} while(0);

}
