/*
 * fsm_automatic.c
 *
 *  Created on: Sep 25, 2023
 *      Author: trinh huy
 */

#include "global.h"
#include "main.h"
#include "display7SEG.h"

void fsm_automatic_run() {
	switch (status) {
	case INIT:
		display7SEG(red);
		HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin,
				GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, GPIO_PIN_SET);
		status = AUTO_RED;
		setTimer1(5000);
		break;
	case AUTO_RED:
		display7SEG(red--);
		HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin,
				GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, GPIO_PIN_SET);
		if (timer1_flag == 1) {
			status = AUTO_GREEN;
			HAL_Delay(3000);
		}
		break;
	case AUTO_GREEN:
		display7SEG(green--);
		HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin,
				GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin,
				GPIO_PIN_RESET);
		if (timer1_flag == 1) {
			status = AUTO_YELLOW;
			HAL_Delay(2000);
		}
		break;
	case AUTO_YELLOW:
		display7SEG(yellow--);
		HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin,
				GPIO_PIN_RESET);
		HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, GPIO_PIN_SET);
		if (timer1_flag == 1) {
			status = AUTO_RED;
			HAL_Delay(5000);
		}
		break;
	default:
		break;
	}
}
