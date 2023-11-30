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

#define AUTO_RED_2		4
#define AUTO_GREEN_2	5
#define AUTO_YELLOW_2	6

extern int status;
extern int s_status;

extern int red;
extern int yellow;
extern int green;

extern int s_red;
extern int s_yellow;
extern int s_green;
void display7SEG(int number);
void traffic_led_1(int number);
void traffic_led_2(int number);

#endif /* INC_DISPLAY7SEG_H_ */
