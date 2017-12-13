/*
 ============================================================================
 Name        : sqsp_lib.c
 Author      : Kevin L. Becker
 Version     :
 Copyright   : Copyright (c) 2017 Ford Motor Co. All rights reserved.
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "cwsw_lib.h"

int main(void)
{

	(void) Init(Cwsw_Lib);

	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
