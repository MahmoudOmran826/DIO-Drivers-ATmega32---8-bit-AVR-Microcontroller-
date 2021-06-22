/*
 * button_driver.c
 *
 * Created: 6/21/2021 11:29:24 AM
 *  Author: Mahmoud Omran
 */ 
#include "dataTypeConversion.h"
#include "registers.h"
#include "button_driver.h"
void initBtnDriver(){
	//PORTC_Data=0x00;
	PORTC_Data_Direction=0x00;
	
}

uint8_t readBtn(){
	return PORTC_Read;
}