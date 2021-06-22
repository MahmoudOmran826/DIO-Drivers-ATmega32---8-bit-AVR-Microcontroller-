/*
 * led_driver.c
 *
 * Created: 6/21/2021 11:28:20 AM
 *  Author: Mahmoud Omran
 */ 
#include "led_driver.h"
#include "dataTypeConversion.h"
#include "registers.h"

void initLedDriver(){
	PORTA_Data_Direction=0x01;
//	PORTA_Data=0x00;
}

uint8_t ledStatus(){
	return PORTA_Read;
}
uint8_t switchLedOn(){
	PORTA_Data=0x01;
	return PORTA_Data;
}
uint8_t switchLedOff(){
	PORTA_Data=0x00;
	return PORTA_Data;
}

