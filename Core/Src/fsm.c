/*
 * fsm.c
 *
 *  Created on: 30 thg 11, 2023
 *      Author: trinh huy
 */

#include "display7SEG.h"
#include "fsm.h"

void fsm1_run() {
	switch (status) {
	case AUTO_RED:
		traffic_led_1(red--);
		if (red <= 0) {
			status = AUTO_GREEN;
			green = 3;
		}
		break;
	case AUTO_GREEN:
		traffic_led_1(green--);
		if (green <= 0) {
			status = AUTO_YELLOW;
			yellow = 2;
		}
		break;
	case AUTO_YELLOW:
		traffic_led_1(yellow--);
		if (yellow <= 0) {
			status = AUTO_RED;
			red = 5;
		}
		break;
	}
}
void fsm2_run() {
	switch (s_status) {
	case AUTO_RED_2:
		traffic_led_2(s_red--);
		if (s_red <= 0) {
			s_status = AUTO_GREEN_2;
			s_green = 3;
		}
		break;
	case AUTO_GREEN_2:
		traffic_led_2(s_green--);
		if (s_green <= 0) {
			s_status = AUTO_YELLOW_2;
			s_yellow = 2;
		}
		break;
	case AUTO_YELLOW_2:
		traffic_led_2(s_yellow--);
		if (s_yellow <= 0) {
			s_status = AUTO_RED_2;
			s_red = 5;
		}
		break;
	}
}
