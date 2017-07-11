/*
 * GccApplication2.c
 *
 * Created: 13/03/2017 9:01:33 PM
 * Author : hussa
 */ 

#include "UART.h"

int main(void)
{
	/* Replace with your application code */
	DDRC = 0;
	DDRA = 0;
	DDRB = 0;
	uint8 arr[4];
	uint8 hash = '#';
	UART_Init();
	while (1)
	{
		arr[0] = PINC;
		arr[1] = PINB ;
		arr[2] = PINA & 0x03;
		arr[3] = PINA & 0x04;
		if(arr[3])
		arr[3] = hash;
		UART_SendString(arr);

		
	}
}

