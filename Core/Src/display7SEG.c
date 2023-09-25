/*
 * display7SEG.c
 *
 *  Created on: Sep 25, 2023
 *      Author: trinh huy
 */

#include "main.h"
#include "display7SEG.h"

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
	if (value >= 0 && value <= 4) {
		HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, 1);
		HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, 0);
		HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, 0);

//		HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, 0);
//		HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, 0);
//		HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, 1);
	}

	if (value >= 5 && value <= 6) {
		HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, 0);
		HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, 1);
		HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, 0);

//		HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, 0);
//		HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, 1);
//		HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, 0);

	}

	if (value >= 7 && value <= 9) {
		HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, 0);
		HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, 0);
		HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, 1);
//		HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, 1);
//		HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, 0);
//		HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, 0);

	}
}

