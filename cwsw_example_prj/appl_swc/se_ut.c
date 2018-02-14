/*
 ============================================================================
 Name        : se_ut.c
 Author      : Kevin L. Becker
 Version     :
 Copyright   : Copyright (c) 2017 Kevin L. Becker. All rights reserved.
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "extensions.h"
#include "CoinVendMgr.h"

int main(void) {

	Init(Lib);
	Init(CoinVendMgr);

	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
