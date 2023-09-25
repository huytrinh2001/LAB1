/*
 * global.h
 *
 *  Created on: Sep 25, 2023
 *      Author: trinh huy
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "fsm_automatic.h"
#include "software_timer.h"
#include "display7SEG.h"
#include "main.h"

#define INIT 			1
#define AUTO_RED    	2
#define AUTO_GREEN  	3
#define AUTO_YELLOW 	4

extern int status;
extern int red;
extern int yellow;
extern int green;
#endif /* INC_GLOBAL_H_ */
