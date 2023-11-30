/*
 * display7SEG.c
 *
 *  Created on: Sep 25, 2023
 *      Author: trinh huy
 */

#include "main.h"
#include "display7SEG.h"

int status = 1;
int red = 5;
int yellow = 2;
int green = 3;

void display7SEG(int counter) {
	switch (counter) {
	case 0:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, 0);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, 0);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, 0);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, 0);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, 0);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, 0);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, 1);
		break;
	case 1:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, 1);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, 0);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, 0);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, 1);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, 1);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, 1);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, 1);
		break;
	case 2:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, 0);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, 0);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, 1);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, 0);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, 0);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, 1);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, 0);
		break;
	case 3:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, 0);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, 0);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, 0);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, 0);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, 1);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, 1);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, 0);
		break;
	case 4:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, 1);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, 0);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, 0);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, 1);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, 1);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, 0);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, 0);
		break;
	case 5:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, 0);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, 1);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, 0);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, 0);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, 1);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, 0);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, 0);
		break;
	case 6:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, 0);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, 1);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, 0);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, 0);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, 0);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, 0);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, 0);
		break;
	case 7:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, 0);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, 0);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, 0);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, 1);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, 1);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, 1);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, 1);
		break;
	case 8:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, 0);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, 0);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, 0);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, 0);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, 0);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, 0);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, 0);
		break;
	case 9:
		HAL_GPIO_WritePin(LED_A_GPIO_Port, LED_A_Pin, 0);
		HAL_GPIO_WritePin(LED_B_GPIO_Port, LED_B_Pin, 0);
		HAL_GPIO_WritePin(LED_C_GPIO_Port, LED_C_Pin, 0);
		HAL_GPIO_WritePin(LED_D_GPIO_Port, LED_D_Pin, 0);
		HAL_GPIO_WritePin(LED_E_GPIO_Port, LED_E_Pin, 1);
		HAL_GPIO_WritePin(LED_F_GPIO_Port, LED_F_Pin, 0);
		HAL_GPIO_WritePin(LED_G_GPIO_Port, LED_G_Pin, 0);
		break;
	default:
		break;
	}
}

void traffic_led(int value) {

	switch (status) {
	case AUTO_RED:
		HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, 1);
		HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, 0);
		HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, 0);
		display7SEG(value);
		break;
	case AUTO_GREEN:
		HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, 0);
		HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, 0);
		HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, 1);
		display7SEG(value);
		break;
	case AUTO_YELLOW:
		HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, 0);
		HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, 1);
		HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, 0);
		display7SEG(value);
		break;
	default:
		break;
	}
}

