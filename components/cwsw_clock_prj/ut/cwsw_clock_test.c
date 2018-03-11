/*
 ============================================================================
 Name        : cwsw_clock_test.c
 Author      : Kevin L. Becker
 Version     :
 Copyright   : Copyright (c) 2018 Kevin L. Becker. All rights reserved.
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "cwsw_lib.h"
#include "cwsw_arch.h"
#include "cwsw_board.h"
#include "cwsw_clock.h"
#include "cwsw_eventsim.h"

uint16_t
BSP__Init(void)
{
	uint16_t ret = 0;

	if(!ret)	Init(Cwsw_Lib);			// Cwsw_Lib__Init()
	if(!ret)	ret = Init(Cwsw_Arch);
	if(!ret)	ret = Init(Cwsw_Board);
	return ret;
}

int main(void)
{
	tCwswClockTics start, stop, et;
	tCwswClockTics tmr;

	UNUSED(stop);
	UNUSED(et);

	(void) Init(BSP);					// BSP__Init(), my local shortcut for all of the "unininteresting" stuff
	(void) Init(Cwsw_Clock);

	(void)puts("CWSW Clock Library Unit Test");

	start = GET(SYSTEM_TIME);
	do { } while(GET(SYSTEM_TIME) == start);
	stop = GET(SYSTEM_TIME);
	et = Cwsw_ElapsedTimeMs(start, stop);
	(void)printf("%i\n", (unsigned)et);

	Cwsw_Timer__Set(&tmr, 5);
	do
	{
		et = Cwsw_GetTimeLeft(tmr);
	} while(et > 0);

	start = GET(SYSTEM_TIME); Set(Cwsw_Timer, &tmr, 5);
	do {} while(!HAS_TIMER_EXPIRED(tmr));
	et = Cwsw_ElapsedTimeMs(start, tmr);
	(void)printf("%i\n", (unsigned)et);

	start = GET(SYSTEM_TIME); Set(Cwsw_Timer, &tmr, 5);
	do {} while(!TM(tmr));
	et = Cwsw_ElapsedTimeMs(start, tmr);
	(void)printf("%i\n", (unsigned)et);

	return EXIT_SUCCESS;
}

void
NotificationHandler__evNotInitialized		(tNotificationPayload EventData)
{
	UNUSED(EventData);
}

