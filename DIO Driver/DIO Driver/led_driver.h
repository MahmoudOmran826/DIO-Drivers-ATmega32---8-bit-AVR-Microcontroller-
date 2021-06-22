/*
 * led_driver.h
 *
 * Created: 6/21/2021 11:28:49 AM
 *  Author: Mahmoud Omran
 */ 

#include "dataTypeConversion.h"
#ifndef LED_DRIVER_H_
#define LED_DRIVER_H_

void initLedDriver();
uint8_t ledStatus();
uint8_t switchLedOn();
uint8_t switchLedOff();


#endif /* LED_DRIVER_H_ */