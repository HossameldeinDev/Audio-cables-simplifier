/*
 * GccApplication3.c
 *
 * Created: 13/03/2017 9:03:15 PM
 * Author : hussa
 */ 

#include "UART.h"
int main(void)
{
    /* Replace with your application code */
	DDRC = 0xff;
	DDRA = 0xff;
	DDRB = 0xff;
	uint8 arr[4];
	UART_Init();
    while (1) 
    {
		arr[0] = UART_ReceiveByte();
		arr[1] = UART_ReceiveByte();
		arr[2] = UART_ReceiveByte();
		arr[3] = UART_ReceiveByte();
		if (arr[3] == '#') 
		{
			PORTC = 0;
			PORTA = 0;
			PORTB = 0;
		}
		else 
		{
		PORTC = ~(arr[0]);
		PORTA = ~(arr[1]);
		PORTB = ~(arr[2]);
		}
    }
}

