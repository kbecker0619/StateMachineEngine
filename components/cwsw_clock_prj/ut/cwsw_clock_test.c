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
#include "cwsw_bsp.h"
#include "cwsw_clock.h"		/* hmmm, in LabWindows/CVI, the nesting seems to cause breakage. need to directly include the main API */
#include "clock_if.h"

int main(void)
{
	tCwswClockTics start, stop, et;
	tCwswClockTics tmr;

	(void) Init(BSP);
	(void) Init(Cwsw_Lib);
	(void) Init(Cwsw_Clock);

	(void)puts("CWSW Clock Library Unit Test");

	start = GET(SYSTEM_TIME);
	do { } while(GET(SYSTEM_TIME) == start);
	stop = GET(SYSTEM_TIME);
	et = Cwsw_ElapsedTimeMs(start, stop);
	(void)printf("%i\n", (unsigned)et);

	Cwsw_SetTimerVal(&tmr, 5);
	do
	{
		et = Cwsw_GetTimeLeft(tmr);
	} while(et > 0);

	start = GET(SYSTEM_TIME); Cwsw_SetTimerVal(&tmr, 5);
	do {} while(!HAS_TIMER_EXPIRED(tmr));
	et = Cwsw_ElapsedTimeMs(start, tmr);
	(void)printf("%i\n", (unsigned)et);

	start = GET(SYSTEM_TIME); Cwsw_SetTimerVal(&tmr, 5);
	do {} while(!TM(tmr));
	et = Cwsw_ElapsedTimeMs(start, tmr);
	(void)printf("%i\n", (unsigned)et);

	return EXIT_SUCCESS;
}
