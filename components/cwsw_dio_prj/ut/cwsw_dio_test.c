/*
 ============================================================================
 Name        : cwsw_dio_test.c
 Author      : Kevin L. Becker
 Version     :
 Copyright   : Copyright (c) 2018 Kevin L. Becker. All rights reserved.
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "projcfg.h"

#include <stdio.h>
#include <stdlib.h>

#if (XPRJ_Debug_CVI)
#include <cvirte.h>
#include <userint.h>
#include "cwsw_dio_uir.h"
#endif

#include "cwsw_lib.h"
#include "cwsw_bsp.h"
#include "cwsw_eventsim.h"
#include "app.h"


static bool terminate_requested = false;

static void
Csws_Dio_Ut__Task(void)
{
	bool a = GET(BspSwitch1);	/* Get(Cwsw_Board, kBrdSwitch1) ==> PLIB_PORTS_PinGet() */
	SET(BspActivity2, a);		/* Cwsw_Bsp__Set_BspActivity2() */
	Task(Heartbeat);
}

void
APP_Initialize(void)
{
	terminate_requested = false;
}


extern int panelHandle;

int
main(int argc, char *argv[])
{
	UNUSED(argc);
	UNUSED(argv);

	(void) Init(BSP);		// BSP__Init().	because in the cwsw world, the bsp depends upon the cwsw lib, initialization of cwsw_lib is done in the bsp init
	(void) puts("CWSW DIO Library Unit Test");

#if (XPRJ_Debug_CVI)
	{
		if (InitCVIRTE (0, argv, 0) == 0)								return -1;	/* out of memory */
		if ((panelHandle = LoadPanel (0, "cwsw_dio.uir", PANEL)) < 0)	return -1;
		DisplayPanel (panelHandle);
		RunUserInterface ();
		DiscardPanel (panelHandle);
	}
#else
	{
		terminate_requested = false;
		while(!terminate_requested) { Task(Csws_Dio_Ut); }
	}
#endif

	return EXIT_SUCCESS;

}

void
EventHandler__evNotInitialized(tEventPayload EventData)
{
	UNUSED(EventData);
}

