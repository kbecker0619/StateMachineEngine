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
#include "clock_if.h"

int main(void)
{
	(void) Init(Cwsw_Lib);
	(void) Init(Cwsw_Clock);

	(void)puts("CWSW Clock Library Unit Test");

	tCwswClockTics start = GET(SYSTEM_TIME);
	do { } while(GET(SYSTEM_TIME) == start);
	tCwswClockTics stop = GET(SYSTEM_TIME);

	tCwswClockTics et = Cwsw_ElapsedTimeMs(start, stop);

	(void)printf("%i\n", (unsigned)et);


	tCwswClockTics tmr;
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
