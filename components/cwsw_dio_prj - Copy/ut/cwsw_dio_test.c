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

int main(void)
{

	(void) Init(BSP);		// because in the cwsw world, the bsp depends upon the cwsw lib, initialization of cwsw_lib is done in the bsp init

	(void)puts("CWSW DIO Library Unit Test");

	return EXIT_SUCCESS;
}
