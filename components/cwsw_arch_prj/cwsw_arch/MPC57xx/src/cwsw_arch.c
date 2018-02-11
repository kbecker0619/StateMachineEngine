/** @file
 *	@brief	Initialize the MCU.
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

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

#include "projcfg.h"
#if (XPRJ_Debug_XC_MPC57xx_DevKit)	/* { */

// ----	System Headers --------------------------
#include <stdbool.h>

// ----	Project Headers -------------------------
#include "cwsw_lib.h"

// ----	Module Headers --------------------------
#include "cwsw_arch.h"		/* main API */
/* followed by arch-specific stuff */


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
static char const * const cwsw_arch_RevString = "$Revision: 0123 $";

static bool initialized = false;


// ============================================================================
// ----	Private Prototypes ----------------------------------------------------
// ============================================================================

#if (USE_SYS_CLK)
#include "system/clk/sys_clk.h"

#else
#define SYS_CLK_Initialize(a)			do { UNUSED(a); } while(0)

#endif

#if (USE_SYS_DEVCON)
#else
#define SYS_DEVCON_Initialize(a, b)		do { UNUSED(a); UNUSED(b); } while(0)
#define SYS_DEVCON_PerformanceConfig(a)	do { UNUSED(a); } while(0)
#endif

#if (USE_SYS_PORTS)
#include "system/ports/sys_ports.h"
#else
#define SYS_PORTS_Initialize()			do {} while(0)
#endif


// ============================================================================
// ----	Public Functions ------------------------------------------------------
// ============================================================================

/** Provide default implementation of MCU-specific initialization of interrupts and exceptions.
 *	The purpose for including this here, is to allow disabling of the actual
 *	MCU support functionality while still allowing the project to build.
 */
#include "system/int/MPC57xx__Interrupt_Init.h"	/* xcptn_xmpl() */
#include "derivative.h"							/* PIT */
#include "system/int/pit.h"
WEAK void xcptn_xmpl(void) {}
uint16_t
Cwsw_Arch__Init(void)
{

	UNUSED(cwsw_arch_RevString);
	// for desktop use, there's really not much to do here.

	do {						/* enabled interrupts. This is done 1st in NXP example code. */
		xcptn_xmpl();           /* Configure and Enable Interrupts */

//	    /* klb: specifically call interrupt init functions for this demonstration project.
//	     * not sure i'm doing it right, i am still exploring, and at the time i'm writing this,
//	     * i can't actually connect to a target board to test it out.
//	     *
//	     * this code copied from main() in the NXP's New Project From Example wizard.
//	     */
//	    PIT.MCR.B.MDIS = 0; /* Enable PIT module. NOTE: PIT module must be       */
//	                        /* enabled BEFORE writing to it's registers.         */
//	                        /* Other cores will write to PIT registers so the    */
//	                        /* PIT is enabled here before starting other cores.  */
//	    PIT.MCR.B.FRZ = 1;  /* Freeze PIT timers in debug mode */
//
//	    PIT0_init(40000000); /* Initialize PIT channel 0 for desired SYSCLK counts*/
//	             	 	 	 /* timeout= 40M  PITclks x 4 sysclks/1 PITclk x 1 sec/160Msysck */
//	    					 /*        = 40M x 4 / 160M = 160/160 = 1 sec.  */
//
//		PIT1_init(20000000);
//		             /* timeout= 20M  PITclks x 4 sysclks/1 PITclk x 1 sec/160Msysck */
//		             /*        = 20M x 4 / 160M = 80/160 = 0.5 sec.  */
//
//		PIT2_init(10000000);
//		             /* timeout= 10M  PITclks x 4 sysclks/1 PITclk x 1 sec/160Msysck */
//		             /*        = 10M x 4 / 160M = 40/160 = 0.25 sec.  */
//
//	    SW_INT_1_init();   	 /* Initialize SW INT1 (to be serviced by core 1) */
//
	} while(0);



	/* Core Processor Initialization
     * forgive this flagrant violation of personal ingenuity, but the names and call order is
     * borrowed, /FOR NOW/, from MHC. I fully intend to absract this so it's my own implementation,
     * not a blatant borrowing of someone else's favored methods.
     */
	SYS_CLK_Initialize(NULL);
	SYS_DEVCON_Initialize(0, NULL);
	SYS_DEVCON_PerformanceConfig(0);
	SYS_PORTS_Initialize();

	initialized = true;
	return 0;

}


bool
Cwsw_Arch__Get_Initialized(void)
{
	return initialized;
}

#else
#error Unknown CPU Architecture

#endif								/* } */
