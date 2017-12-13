/*
 ============================================================================
 Name        : cwsw_smeng_test.c
 Author      : Kevin L. Becker
 Version     :
 Copyright   : Copyright (c) 2018 Kevin L. Becker. All rights reserved.
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "cwsw_lib.h"
#include "cwsw_clock.h"
#include "cwsw_smengine.h"
#include "cwsw_eventsim.h"

#include "coinvend.h"

static bool terminate_requested = false;


int main(void)
{
	(void)puts("CWSW State Machine Engine Unit Test");

	(void) Init(Cwsw_Lib);
	(void) Init(Cwsw_Clock);
	(void) Init(Cwsw_Sme_Ut);

	while(!terminate_requested)
	{
		Task(Csws_Sme_Ut);
	}
	return EXIT_SUCCESS;
}

void
EventHandler__evNotInit(tEventPayload EventData)
{
	UNUSED(EventData);
	dprintf("\t%s\n", "Application Not Initialized Correctly, Terminating");
	terminate_requested = true;
}

void
EventHandler__evTerminateRequested	(tEventPayload EventData)
{
	UNUSED(EventData);
	dprintf("\n\t%s\n", "End of demonstration\n");
	terminate_requested = true;
}
