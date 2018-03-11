/** @file
 *	@brief	Board Support Package.
 *
 *	Description:
 *	In the Beckersoft ecosystem, the BSP is generic yet application-specific, and sits between the
 *	any component or module that needs board services (e.g., application components), and the
 *	actual board itself, which is generic for any project that utilizes a specific board.
 *
 *	this module knows how the various attributes of the board are connected together to fulfill the
 *	functionality of this app, and (may) expose functionality APIs rather than raw board-related
 *	APIs. we would normally expect this module to talk only to the board module, though i suppose
 *	in the abstract, an occasional skipping right to the arch might be in order.
 *
 *	Copyright (c) 2018 Kevin L. Becker. All rights reserved.
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
#include <stdint.h>
#include <stdbool.h>

// ----	Project Headers -------------------------
#include "cwsw_lib.h"			/* foundational, cwsw-common stuff */
#include "cwsw_eventsim.h"

#include "cwsw_arch.h"			/* which MCU are we using? should be set by command-line include paths */
#include "cwsw_board.h"			/* which board are we using? each board is built upon a specific MCU. path to this folder should be set by command-line include paths */

// ----	Module Headers --------------------------
#include "cwsw_bsp.h"			/* how are we using this board? yes, conceptually, a bsp could support multiple boards and/or MCUs, but that's not where we are at this moment. this file will be project-specific */
#include "system/int/sys_int.h"	/* todo: refactor this out. BSP should be going through board and/or arch, not skipping a layer and going right to interrupts */


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
static char const * const cwsw_bsp_RevString = "$Revision: 0123 $";

static bool initialized = false;

// ============================================================================
// ----	Private Prototypes ----------------------------------------------------
// ============================================================================

/* targets for Get() and Set() macro expansions.
 * These are located here, and are designed as functions, specifically to implement a separation
 * in dependencies between users of this module and the board modules. if, for example, these were
 * implemented as FLMs (function-like macros) or inline functions located in the API, then the
 * suppliers would need compile-time access to the board. by making functions here, the users only
 * need API access to this module.
 */
#if (XPRJ_Debug_CVI)
#include "cwsw_dio_uir.h"
#endif
void
Cwsw_Bsp__Set_BspHeartbeatInd(tDO_LogicalValues onoff)
{
	Set(Cwsw_Board, kBoardLed1, onoff);
}

void
Cwsw_Bsp__Set_BspActivity2(tDO_LogicalValues onoff)
{
	Set(Cwsw_Board, kBoardLed2, onoff);
}

void
Cwsw_Bsp__Set_BspActivity3(tDO_LogicalValues onoff)
{
	Set(Cwsw_Board, kBoardLed3, onoff);
}

#include "cwsw_clock.h"
void
Heartbeat__Task(void)
{
	static tCwswClockTics heartbeat_timer= 0;

	if(TM(heartbeat_timer))
	{
		tDO_LogicalValues curstate = Get(Cwsw_Board, kBoardLed1);
		Cwsw_Timer__Set(&heartbeat_timer, 1000);
		Set(Cwsw_Board, kBoardLed1, !curstate);
	}
}


/** Abstracted button handler.
 *	This handler is intended to be the same, whether you're getting input from the console, from a LW/CVI panel, etc.
 * 	Within this handler, all you should do is set the flags used by the "business logic" in the task function(s).
 */
void
EventHandler__evButtonCommit(tNotificationPayload EventData)
{
	/* simply to test it out, forward to the other event handler.
	 */
	PostEvent(evButtonPressed, EventData);
}


// ============================================================================
// ----	Public Functions ------------------------------------------------------
// ============================================================================

/** Initialization of all things not directly related to the library under test.
 * Yes, we realize that we're misusing the name "BSP"; here, it's much more generalized than the
 * word actually refers to.
 *
 * For the structure of this, since we're developing it as we try to get a generalized architecture
 * that "works" with Linux and Windows apps compiled w/ GCC; the Microchip Harmony; Atmel ASF;
 * IAR StarterKit SR730-SK; NXP Calypso, and AUTOSAR, we're taking the general structure and order
 * of things from the Harmony framework, and then morphing as appropriate.
 *
 * @return
 */
#include "system/system.h"			/* API as defined by MHC. Note that including any part of the path, violates all kinds of coding rules (including my own personal rules) */
#include "system_definitions.h"		/* sysObj */
#include "system/int/sys_int.h"
#include "app.h"
uint16_t
BSP__Init(void)
{
	UNUSED(cwsw_bsp_RevString);
//	UNUSED(ind_led_map);

	(void) Init(Cwsw_Lib);				/* Cwsw_Lib__Init(). board independent, arch independent, for some environs, inits things used by following modules */

#	if(!XPRJ_pic32mz_ef_sk) || ( (XPRJ_pic32mz_ef_sk == pic32mz_ef_sk) && (1) )
	{
		do {	    /* Core Processor Initialization */
			(void) Init(Cwsw_Arch);		// Cwsw_Arch__Init()
		} while(0);

		do {		/* Board Support Package Initialization */
			(void) Init(Cwsw_Board);	// Cwsw_Board__Init()

		} while(0);

		do {		/* Initialize Drivers */

		} while(0);

		do {		/* Initialize System Services */
		    SYS_INT_Initialize();
		} while(0);

		do {		/* Initialize Middleware */
//			sysObj.drvTmr0 = DRV_TMR_Initialize(DRV_TMR_INDEX_0, (SYS_MODULE_INIT *)&drvTmr0InitData);

//			SYS_INT_VectorPrioritySet(INT_VECTOR_T1, INT_PRIORITY_LEVEL1);
//			SYS_INT_VectorSubprioritySet(INT_VECTOR_T1, INT_SUBPRIORITY_LEVEL0);
		} while(0);

		do {		/* Enable Global Interrupts */
			SYS_INT_Enable();
		} while(0);

		do {		/* Initialize the Application */
			APP_Initialize();
		} while(0);
	}
#	else
	{
		/* for now, simply defer to the MHC-generated code
		 */
		SYS_Initialize(NULL);
	}
#endif

	initialized = true;
	return 0;
}

bool
Cwsw_Bsp__Get_Initialized(void)
{
	return initialized;
}
