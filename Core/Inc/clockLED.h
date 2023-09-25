/*
 * clockLED.h
 *
 *  Created on: 25 thg 9, 2023
 *      Author: trinh huy
 */

#ifndef INC_CLOCKLED_H_
#define INC_CLOCKLED_H_

void clearAllClock(void);
void setNumberOnClock(int num);
void clearNumberOnClock(int num);
void Clock(int hour, int minute, int sec);

#endif /* INC_CLOCKLED_H_ */
