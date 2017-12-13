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
