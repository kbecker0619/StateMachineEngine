/** @file
 *	Total, complete clone of file from NXP's New Project From Example wizard, then modified for
 *	this project.
 *
 *	This file is here only for support of the Architecture "Unit Test" environment, and is intended
 *	to be replaced by project-specific defines in the project that uses this component.
 *
 *  Created on: Feb 23, 2016
 *      Author: B55457
 *	Modified Kevin L. Becker for cwsw_arch development.
 *
 */

#ifndef GPIO_H_
#define GPIO_H_


/**********************************************************************************************
* Includes
**********************************************************************************************/
#include "project.h"

/**********************************************************************************************
* Constants
**********************************************************************************************/


/**********************************************************************************************
* Macros
**********************************************************************************************/
#define LED_DS4 SIUL2.GPDO[PA10].B.PDO_4n
#define LED_DS5 SIUL2.GPDO[PA7].B.PDO_4n
#define LED_DS6 SIUL2.GPDO[PH13].B.PDO_4n
#define LED_DS7 SIUL2.GPDO[PC4].B.PDO_4n
#define LED_DS8 SIUL2.GPDO[PH5].B.PDO_4n
#define LED_DS9 SIUL2.GPDO[PJ4].B.PDO_4n
#define LED_DS10 SIUL2.GPDO[PA0].B.PDO_4n
#define LED_DS11 SIUL2.GPDO[PA4].B.PDO_4n

#define BTN_SW4 SIUL2.GPDI[PA3].B.PDI_4n
#define BTN_SW2 SIUL2.GPDI[PE12].B.PDI_4n

#define LED_ON 0
#define LED_OFF 1

#define DEBOUNCEDELAYTIME 0xFFFF

/**********************************************************************************************
* Types
**********************************************************************************************/


/**********************************************************************************************
* Variables
**********************************************************************************************/


/**********************************************************************************************
* Global Variables
**********************************************************************************************/


/**********************************************************************************************
* Global Functions
**********************************************************************************************/

void initGPIO(void);
void GPIO_toggle(uint16_t, uint32_t, uint32_t);
void DebounceDelay(void);
void DebouncedWaitTilLow(uint16_t);
void DebouncedWaitTilHigh(uint16_t);

#endif /* GPIO_H_ */