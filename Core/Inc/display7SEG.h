/*
 * display7SEG.h
 *
 *  Created on: Sep 25, 2023
 *      Author: trinh huy
 */

#ifndef INC_DISPLAY7SEG_H_
#define INC_DISPLAY7SEG_H_
#define AUTO_RED	1
#define AUTO_GREEN	2
#define AUTO_YELLOW	3

extern int status;
extern int red;
extern int yellow;
extern int green;
void display7SEG(int number);
void traffic_led(int number);

#endif /* INC_DISPLAY7SEG_H_ */
