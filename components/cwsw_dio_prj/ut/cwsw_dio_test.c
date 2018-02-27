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


/** Establish app-specific aliased names for buttons provided by Board component.
 */
enum eButtons { kButton1, kButton2, kButton3, kNumButtons };


static bool terminate_requested = false;

/* Set the timeout values for the various subtask timers.
 * Expansion of SET(tmrXXms, duration).
 * These are defined here, at file scope, because of coding standards, but are intended to be used
 * only within the UT task function.
 */
#define SET_tmr5ms(val)		Set(Cwsw_Timer, &tmr5ms, val)
#define SET_tmr10ms(val)	Set(Cwsw_Timer, &tmr10ms, val)
#define SET_tmr20ms(val)	Set(Cwsw_Timer, &tmr20ms, val)
#define SET_tmr50ms(val)	Set(Cwsw_Timer, &tmr50ms, val)
#define SET_tmr100ms(val)	Set(Cwsw_Timer, &tmr100ms, val)
#define SET_tmr500ms(val)	Set(Cwsw_Timer, &tmr500ms, val)


/* for now, i'm cheating - do as i say, not as i do - because i want to break up each task's
 * functionality into a standalone module. if this sticks, i'll make more formal.
 */
#if ( (XPRJ_Debug_Win_MinGW) || (XPRJ_Debug_Linux_GCC) )		/* { */
extern void ms1__Task(void);

#elif (XPRJ_Debug_CVI)
#define ms1__Task()		do {} while(0)

#endif															/* } */


void
Dio_Ut__Task(void)
{

	tCwswClockTics start, overrun = 0, nowtm;
	static tCwswClockTics tmr5ms = 0, tmr10ms = 0, tmr20ms = 0,
			tmr50ms = 0, tmr100ms = 0, tmr500ms = 0;
	UNUSED(tmr10ms); UNUSED(tmr20ms); UNUSED(tmr50ms);
	UNUSED(tmr100ms); UNUSED(tmr500ms);

	/* this task is only called when we don't have a hardware tic, so we need to get our time base
	 * as early as possible, and at as high a repetition rate as possible.
	 */
	do {				/* do time keeping */
		start = GET(SYSTEM_TIME);

		/* empirical debugging in VM on MinGW: if we've already exceede the overrun value, there's
		 * no sense whatsoever in looping until the current time tics over. just get on with it.
		 */
		if(!TM(overrun)) do { } while(GET(SYSTEM_TIME) == start);

		/* reset start time for duration of this iteration, so we can institute task-overrun
		 * checking.
		 */
		start = GET(SYSTEM_TIME);
		Cwsw_Timer__Set(&overrun, 15);
	} while(0);

	do {				/* execute 1-ms tasks. */
		Task(ms1);
	} while(0);

	if(TM(tmr5ms)) {	/* check if we should execute, and do if so, the 5 ms tasks */
		SET(tmr5ms, 5);
		if(0)			/* unbelievable, but on a PC where the 1-ms task only gets & processes
						 * ONE DI sample & prints if an event happens, we already exceed the 1-ms
						 * boundary, which leaves NO time to execute any of our remaining tasks.
						 * takeaway: for this UT / Dev script, don't count on meeting any hard
						 * deadlines, but this could spell trouble for polled systems on a hard
						 * 1-ms deadline.
						 */
		{
			cwsw_assert(GET(SYSTEM_TIME) == start, "Task Functions exceeded alloted time");
		} else {
			if(TM(overrun))
			{
				nowtm = GET(SYSTEM_TIME);
				cwsw_assert(!TM(overrun), "Task Functions exceeded alloted time");
				/* now, compare "overrun" with "nowtm" */
			}
		}

	} while(0);

	if(TM(tmr10ms)) {	/* check if we should execute, and do if so, the 10 ms tasks */
		SET(tmr10ms, 10);
		if(0)
		{
			cwsw_assert(GET(SYSTEM_TIME) == start, "Task Functions exceeded alloted time");
		} else {
			cwsw_assert(!TM(overrun), "Task Functions exceeded alloted time");
		}
	} while(0);

	if(TM(tmr20ms)) {	/* check if we should execute, and do if so, the 20 ms tasks */
		SET(tmr20ms, 20);
		if(0)
		{
			cwsw_assert(GET(SYSTEM_TIME) == start, "Task Functions exceeded alloted time");
		} else {
			cwsw_assert(!TM(overrun), "Task Functions exceeded alloted time");
		}
	} while(0);

	if(TM(tmr50ms)) {	/* check if we should execute, and do if so, the 50 ms tasks */
		SET(tmr50ms, 50);
		if(0)
		{
			cwsw_assert(GET(SYSTEM_TIME) == start, "Task Functions exceeded alloted time");
		} else {
			cwsw_assert(!TM(overrun), "Task Functions exceeded alloted time");
		}
	} while(0);

	if(TM(tmr100ms)) {	/* check if we should execute, and do if so, the 100 ms tasks */
		SET(tmr100ms, 100);
		if(0)
		{
			cwsw_assert(GET(SYSTEM_TIME) == start, "Task Functions exceeded alloted time");
		} else {
			cwsw_assert(!TM(overrun), "Task Functions exceeded alloted time");
		}
	} while(0);

	if(TM(tmr500ms)) {	/* check if we should execute, and do if so, the 500 ms tasks */
		SET(tmr500ms, 500);
		if(0)
		{
			cwsw_assert(GET(SYSTEM_TIME) == start, "Task Functions exceeded alloted time");
		} else {
			cwsw_assert(!TM(overrun), "Task Functions exceeded alloted time");
		}
	} while(0);

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
