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
#include "cwsw_bsp.h"		/* todo: kill this because i'm going to kill "bsp" as a standalone entity */
#include "cwsw_clock.h"

#include "cwsw_eventsim.h"
#include "app.h"


static bool terminate_requested = false;

/* Set the timeout values for the various subtask timers.
 * Expansion of SET(tmrXXms, duration).
 * These are defined here, at file scope, because of coding standards, but are intended to be used
 * only within the UT task function.
 */
#define SET_tmr5ms(val)		Set(Cwsw_Timer, &tmr5ms, val)
#define SET_tmr10ms(val)	Set(Cwsw_Timer, &tmr10ms, val)
#define SET_tmr20ms(val)	Set(Cwsw_Timer, &tmr20ms, val)


void
Dio_Ut__Task(void)
{

	tCwswClockTics start, stop, et;
	static tCwswClockTics tmr5ms = 0, tmr10ms = 0, tmr20ms = 0,
			tmr50ms = 0, tmr100ms = 0, tmr500ms = 0;
	UNUSED(tmr10ms); UNUSED(tmr20ms); UNUSED(tmr50ms);
	UNUSED(tmr100ms); UNUSED(tmr500ms);

	/* this task is only called when we don't have a hardware tic, so we need to get our time base
	 * as early as possible, and at as high a repetition rate as possible.
	 */
	do {	/* do time keeping */
		start = GET(SYSTEM_TIME);
		do { } while(GET(SYSTEM_TIME) == start);
		/* reset start time for duration of this iteration, so we can institute task-overrun
		 * checking.
		 */
		start = GET(SYSTEM_TIME);
	} while(0);

	do {	/* execute 1-ms tasks. */

	} while(0);

	if(TM(tmr5ms)) {	/* check if we should execute, and do if so, the 5 ms tasks */
		SET(tmr5ms, 5);
		cwsw_assert(GET(SYSTEM_TIME) == start, NULL);

	} while(0);

	if(TM(tmr10ms)) {	/* check if we should execute, and do if so, the 10 ms tasks */
		SET(tmr10ms, 10);
		cwsw_assert(GET(SYSTEM_TIME) == start, "");

	} while(0);

	do {	/* check if we should execute, and do if so, the 20 ms tasks */
		SET(tmr20ms, 20);
		cwsw_assert(GET(SYSTEM_TIME) == start, "");

	} while(0);

	do {	/* check if we should, and do if so, execute the 50 ms tasks */

	} while(0);

	do {	/* check if we should, and do if so, execute the 100 ms tasks */

	} while(0);

	do {	/* check if we should, and do if so, execute the 500 ms tasks */

	} while(0);

//	stop = GET(SYSTEM_TIME);
//	et = Cwsw_ElapsedTimeMs(start, stop);
//	(void)printf("%i\n", (unsigned)et);
//
//	Cwsw_SetTimerVal(&tmr, 5);
//	do
//	{
//		et = Cwsw_GetTimeLeft(tmr);
//	} while(et > 0);
//
//	start = GET(SYSTEM_TIME); Cwsw_SetTimerVal(&tmr, 5);
//	do {} while(!HAS_TIMER_EXPIRED(tmr));
//	et = Cwsw_ElapsedTimeMs(start, tmr);
//	(void)printf("%i\n", (unsigned)et);
//
//	start = GET(SYSTEM_TIME); Cwsw_SetTimerVal(&tmr, 5);
//	do {} while(!TM(tmr));
//	et = Cwsw_ElapsedTimeMs(start, tmr);
//	(void)printf("%i\n", (unsigned)et);






////	if(GET(SetEventSeen))
//	{
//		bool a = GET(activity1ind);
//		SET(BspHeartbeatInd, a);		/* Cwsw_Bsp__Set_BspActivity2() */
//		SET(BspActivity2, GET(activity2ind));
//		SET(BspActivity3, GET(activity3ind));
//		SET(SetEventSeen, false);
//	}
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
		if (InitCVIRTE (0, argv, 0) == 0)									return -1;	/* out of memory */
		if ((panelHandle = LoadPanel (0, "cwsw_dio_uir.uir", PANEL)) < 0)	return -1;
		DisplayPanel (panelHandle);
		RunUserInterface ();
		DiscardPanel (panelHandle);
	}
#else
	{
		terminate_requested = false;
		while(!terminate_requested) { Task(Dio_Ut); }	/* Dio_Ut__Task() */
	}
#endif

	return EXIT_SUCCESS;

}

void
EventHandler__evNotInitialized(tEventPayload EventData)
{
	UNUSED(EventData);
}
