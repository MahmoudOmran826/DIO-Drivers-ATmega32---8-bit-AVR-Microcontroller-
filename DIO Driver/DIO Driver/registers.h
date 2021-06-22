/*
 * registers.h
 *
 * Created: 6/21/2021 11:15:04 AM
 *  Author: Mahmoud Omran
 */ 
#include "dataTypeConversion.h"

#ifndef REGISTERS_H_
#define REGISTERS_H_
/*
$15 ($35) PORTC PORTC7 PORTC6 PORTC5 PORTC4 PORTC3 PORTC2 PORTC1 PORTC0 65
$14 ($34) DDRC DDC7 DDC6 DDC5 DDC4 DDC3 DDC2 DDC1 DDC0 65
$13 ($33) PINC PINC7 PINC6 PINC5 PINC4 PINC3 PINC2 PINC1 PINC0 65
$1B ($3B) PORTA PORTA7 PORTA6 PORTA5 PORTA4 PORTA3 PORTA2 PORTA1 PORTA0 64
$1A ($3A) DDRA DDA7 DDA6 DDA5 DDA4 DDA3 DDA2 DDA1 DDA0 64
$19 ($39) PINA PINA7 PINA6 PINA5 PINA4 PINA3 PINA2 PINA1 PINA0 64
*/
#define PORTA_Data *((volatile uint8_t*)0x3B)
#define PORTC_Data *((volatile uint8_t*)0x35)
#define PORTA_Data_Direction *((volatile uint8_t*)0x3A)
#define PORTC_Data_Direction *((volatile uint8_t*)0x34)
#define PORTA_Read *((volatile uint8_t*)0x39)
#define PORTC_Read *((volatile uint8_t*)0x33)



#endif /* REGISTERS_H_ */