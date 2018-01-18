/*
 ============================================================================
 Name        : cwsw_dio_test.c
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

#include "app.h"


static bool terminate_requested = false;

static void
Csws_Dio_Ut__Task(void)
{

}



int main(void)
{

	(void) Init(BSP);		// because in the cwsw world, the bsp depends upon the cwsw lib, initialization of cwsw_lib is done in the bsp init

	(void)puts("CWSW DIO Library Unit Test");

	terminate_requested = false;
	while(!terminate_requested) { Task(Csws_Dio_Ut); }

	return EXIT_SUCCESS;
}

void APP_Initialize ( void )
{

}

extern void Heartbeat__Task(void);

void APP_Task(void)
{
	Task(Heartbeat);
}
