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
#if !(XPRJ_Debug_XC_MPC57xx_DevKit)	/* { */
#error Unknown MCU Architecture
#endif								/* } */

// ----	System Headers --------------------------
#include <stdbool.h>

// ----	Project Headers -------------------------
#include "cwsw_lib.h"

// ----	Module Headers --------------------------
#include "cwsw_arch.h"										/* main API */
/* followed by arch-specific stuff */
#include "system/int/MPC57xx__Interrupt_Init.h"				/* xcptn_xmpl() */
#include "system/int/intc_SW_mode_isr_vectors_MPC5748G.h"	/* SW_INT_1_init */
#include "MPC5748G.h"										/* PIT */
#include "system/int/pit.h"
#include "system/clk/cwsw_clk.h"							/* peri_clock_gating() */
#include "system/clk/mode.h"								/* system160mhz() */
#include "io/gpio.h"										/* project-specific GPIO API */


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
//WEAK void xcptn_xmpl(void) {}
//WEAK void peri_clock_gating (void) {}
uint16_t
Cwsw_Arch__Init(void)
{

	UNUSED(cwsw_arch_RevString);
	// for desktop use, there's really not much to do here.

	do {					/* enabled interrupts. This is done 1st in NXP example code. */
		xcptn_xmpl();       /* Configure and Enable Interrupts */

	    /* klb: specifically call interrupt init functions for this demonstration project.
	     * not sure i'm doing it right, i am still exploring, and at the time i'm writing this,
	     * i can't actually connect to a target board to test it out.
	     *
	     * this code copied from main() in the NXP's New Project From Example wizard.
	     */
	    PIT.MCR.B.MDIS = 0;	/* Enable PIT module. NOTE: PIT module must be       */
	                        /* enabled BEFORE writing to it's registers.         */
	                        /* Other cores will write to PIT registers so the    */
	                        /* PIT is enabled here before starting other cores.  */
	    PIT.MCR.B.FRZ = 1;  /* Freeze PIT timers in debug mode */

	    PIT0_init(40000000); /* Initialize PIT channel 0 for desired SYSCLK counts*/
	             	 	 	 /* timeout= 40M  PITclks x 4 sysclks/1 PITclk x 1 sec/160Msysck */
	    					 /*        = 40M x 4 / 160M = 160/160 = 1 sec.  */

		PIT1_init(20000000);
		             	 	/* timeout= 20M  PITclks x 4 sysclks/1 PITclk x 1 sec/160Msysck */
		             	 	/*        = 20M x 4 / 160M = 80/160 = 0.5 sec.  */

		PIT2_init(10000000);
		             	 	/* timeout= 10M  PITclks x 4 sysclks/1 PITclk x 1 sec/160Msysck */
		             	 	/*        = 10M x 4 / 160M = 40/160 = 0.25 sec.  */

	    SW_INT_1_init();   	/* Initialize SW INT1 (to be serviced by core 1^h0 (klb)) */

	} while(0);

	do {
	    //Since We are using PIT- one of the peripherals. We need to enable peripheral clocks.
	    peri_clock_gating();	/* Configure gating/enabling peripheral(PTI) clocks for modes */
	                            /* Configuration occurs after mode transition! */

	} while(0);

	do {
	    system160mhz();
	    /* Sets clock dividers= max freq,
	       calls PLL_160MHz function which:
	       MC_ME.ME: enables all modes for Mode Entry module
	       Connects XOSC to PLL
	       PLLDIG: LOLIE=1, PLLCAL3=0x09C3_C000, no sigma delta, 160MHz
	       MC_ME.DRUN_MC: configures sysclk = PLL
	       Mode transition: re-enters DRUN which activates PLL=sysclk & peri clks
	       */
	} while(0);

	do {
	    initGPIO();         /* Initializes LED, buttons & other general purpose pins for NXP EVB */

	} while(0);

	initialized = true;
	return 0;

}


bool
Cwsw_Arch__Get_Initialized(void)
{
	return initialized;
}
