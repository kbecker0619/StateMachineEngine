/** @file
 *	@brief	This file is intended to hold the @b default ISR handlers for the MCP 5748 G MCU.
 *
 *	Description:
 *
 *	Copyright (c) 2018 Kevin L. Becker. All rights reserved.
 *
 *	Original:
 *	Created on: Feb 10, 2018
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
#error Not using MCP57xx CPU Architecture
#endif								/* } */

// ----	System Headers --------------------------

// ----	Project Headers -------------------------
#include "cwsw_lib.h"
#include "system/int/intc_SW_mode_isr_vectors_MPC5748G.h"		/* isr handler prototypes */

// ----	Module Headers --------------------------
#include "cwsw_arch.h"
#include "gpio.h"


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

// ============================================================================
// ----	Private Prototypes ----------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Functions ------------------------------------------------------
// ============================================================================

/** @b Default, weakly-bound interrupt handler for PIT 0.
 */
WEAK void
PIT0_isr(void)
{
	static uint8_t counter=0; /* Increment ISR counter */

	counter++;
	LED_DS4 = ~LED_DS4; /* Toggle DS4 LED port */
	if(counter == 4)
	{
		counter = 0;
		INTC_SSCIR1=0x02;
	}
	PIT.TIMER[0].TFLG.R = 1; /* Clear interrupt flag */
}

WEAK void
PIT2_isr(void)
{
	LED_DS6 = ~LED_DS6; /* Toggle DS6 LED port */
	PIT.TIMER[2].TFLG.R = 1; /* Clear interrupt flag */
}


/** @b Default, weakly-bound initialization for SW 1 interrupts.
 */
WEAK void
SW_INT_1_init(void)
{
//	INTC.PSR[1].B.PRC_SELN = 0x4; /* IRQ sent to Core 1 */ /* klb: in this iteration, we want to begin our support for Calypso w/ CORE0 only */
	INTC.PSR[1].B.PRIN =0x0F; /* IRQ priority = 15 (15 = highest) */
}
