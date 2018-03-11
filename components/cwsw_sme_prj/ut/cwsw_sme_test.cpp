/*
 ============================================================================
 Name        : cwsw_smeng_test.c
 Author      : Kevin L. Becker
 Version     :
 Copyright   : Copyright (c) 2018 Kevin L. Becker. All rights reserved.
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <sme_test.h>
#include <stdio.h>
#include <stdlib.h>

#include "cwsw_eventsim.h"
#include "sme_test.h"


#if (XPRJ_DEBUG_CVI)
	#include <cvirte.h>
	#include <userint.h>
	#include "lw_coinopcoffeemachine.h"
	#include "toolbox.h"	/* so i can simulate pushing a button */
#endif


static bool terminate_requested = false;


int main(int argc, char *argv[])
{
	UNUSED(argc);
	UNUSED(argv);

	(void)puts("CWSW State Machine Engine Unit Test");

	if(Init(Sme_Ut))	// Sme_Ut__Init()
	{

	}
	Task(Sme_Ut);		// Sme_Ut__Task()

	/* error handling check - execute task before initialized */
//	Task(CoffeeMac);
//	(void) Init(Cwsw_Sme_Ut);
//	while(!terminate_requested) { Task(CoffeeMac); }
//
//	/* reset termination request, enter "normal" initialization task, working into normal tasking */
//
//	#if (XPRJ_DEBUG_CVI)
//	do {
//		static int panelHandle;
//		if (InitCVIRTE (0, argv, 0) == 0) 											{ return -1;	/* out of memory */ }
//		if ((panelHandle = LoadPanel (0, "lw_coinopcoffeemachine.uir", PANEL)) < 0) { return -1; }
//		DisplayPanel (panelHandle);
//		RunUserInterface ();
//		DiscardPanel (panelHandle);
//	} while(0);
//
//	#else
	terminate_requested = false;
	while(!terminate_requested) { Task(Sme_Ut); }
//
//	#endif
	return EXIT_SUCCESS;
}

void
EventHandler__evNotInit(tEventPayload EventData)
{
	UNUSED(EventData);
	dbg_printf("\t%s\n", "Application Not Initialized Correctly, Terminating");
	terminate_requested = true;
}

void
EventHandler__evTerminateRequested	(tEventPayload EventData)
{
	UNUSED(EventData);
	dbg_printf("\n\t%s\n", "End of demonstration\n");
	terminate_requested = true;
	#if(XPRJ_DEBUG_CVI)
	{
		int stat = CallCtrlCallback (PANEL, PANEL_QUITBUTTON, EVENT_COMMIT, 0, 0, 0);
		printf("%i\n", stat);
	}
	#endif
}

/** Handler for a coin acceptance.
 * For now, this is simply a placeholder and building block.
 * @param EventData
 */
void
EventHandler__evCoinAccepted(tEventPayload EventData)
{
	UNUSED(EventData);
}

void
EventHandler__evUpdateUi(tEventPayload EventData)
{
#if (XPRJ_DEBUG_CVI)
	int stat = SetCtrlVal (PANEL, PANEL_indTIMELEFT, (float)((int32_t)EventData.evInt / 1000.0));
	assert(!stat);

#else
	UNUSED(EventData);
#endif
}

