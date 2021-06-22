/*
 * DIO Driver.c
 *
 * Created: 6/20/2021 9:48:21 PM
 * Author : Mahmoud Omran
 */ 
//#include <avr/io.h>

#include "registers.h"
#include "led_driver.h"
#include "button_driver.h"
void delay(uint64_t time);
int main(void)
{
    
	initBtnDriver();
	initLedDriver();
    while (1) 
    {
		if (readBtn()==1)
		{
			delay(3000);
			if (ledStatus()==0x01)
			{delay(1000);
				PORTA_Data=switchLedOff();
			}else
			{delay(1000);
				 PORTA_Data=switchLedOn();
			}
			delay(2000);
		}
    }
}
/*

PORTC_Data_Direction=0x00;
PORTA_Data_Direction=0x01;
while (1)
{
if (PORTC_Read==0x01)
{
delay(2000);
if (PORTA_Read==0x01)
{
PORTA_Data=0x00;
}else
{
PORTA_Data=0x01;
}

}
}*/
void delay(uint64_t time){
	
	while(time!=0)
	time--;
}