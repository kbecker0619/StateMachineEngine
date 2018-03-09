/** @file
 *	@brief	Unit Test & Dev for State Machine Engine.
 *
 *	Description:
 *	This file serves a dual purpose:
 *	-	Within the Eclipse / S32DS / MPLAB IDE, this file is subsidiary to the
 *		CPP file, and provides the basic testing script
 *	-	Within LabWindows/CVI, it is the main file.
 *
 *	Copyright (c) 2018 Kevin L. Becker. All rights reserved.
 *
 *	Original:
 *	Created on: Mar 8, 2018
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
#if (XPRJ_Debug_CVI)
#include <cvirte.h>
#include <userint.h>
#endif

#if 0
// ----	Project Headers -------------------------
#endif

// ----	Module Headers --------------------------
#include "sme_test.h"

#include "lw_coinopcoffeemachine.h"


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
static int panelHandle;


// ============================================================================
// ----	Private Prototypes ----------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public Functions ------------------------------------------------------
// ============================================================================
#if (XPRJ_Debug_CVI)
int main (int argc, char *argv[])
{
	if (InitCVIRTE (0, argv, 0) == 0)
		return -1;	/* out of memory */
	if ((panelHandle = LoadPanel (0, "lw_coinopcoffeemachine.uir", PANEL)) < 0)
		return -1;

	(void) Init(Sme_Ut);

	DisplayPanel (panelHandle);
	RunUserInterface ();
	DiscardPanel (panelHandle);
	return 0;
}

int CVICALLBACK cbOnCoinInserted (int panel, int control, int event,
		void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			QuitUserInterface (0);
			break;
	}
	return 0;
}

int CVICALLBACK QuitCallback (int panel, int control, int event,
		void *callbackData, int eventData1, int eventData2)
{
	switch (event)
	{
		case EVENT_COMMIT:
			QuitUserInterface (0);
			break;
	}
	return 0;
}

int CVICALLBACK cbOnTimerTic (int panel, int control, int event,
		void *callbackData, int eventData1, int eventData2)
{
	// for debugging purposes only
	(void)SuspendTimerCallbacks();

	switch (event)
	{
		case EVENT_TIMER_TICK:

			break;
	}

	(void)ResumeTimerCallbacks();
	return 0;
}

#endif


uint16_t
Sme_Ut__Init(void)
{
	uint16_t rv = 0;
	UNUSED(panelHandle);

	if(!rv)	rv = Init(Cwsw_Lib);

	return rv;
}
