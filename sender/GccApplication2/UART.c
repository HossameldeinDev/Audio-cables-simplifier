/*
 * UART.c
 *
 *  Created on: Dec 11, 2015
 *      Author: hussam_mostafa
 */

#include "UART.h"

void UART_Init(void)
{
SET_BIT(UCSRA,U2X);
UCSRB = (1<<RXEN)|(1<<TXEN);
UCSRC = (1<<URSEL)|(1<<UCSZ0)|(1<<UCSZ1);
UBRRH = 0;
UBRRL = 12;
}

void UART_SendByte(const uint8 data)
{
while(BIT_IS_CLEAR(UCSRA,UDRE)){}
UDR = data;
}

uint8 UART_ReceiveByte(void)
{
while(BIT_IS_CLEAR(UCSRA,RXC)){}
return UDR;
}

void UART_SendString(  uint8 *str)
{
	uint8 i = 0;
	for (i = 0 ; i<4 ; ++i)
	{
			UART_SendByte(str[i]);
		}
}

void UART_ReceiveString(uint8 *Str)
{
	uint8 i = 0;
	for (i = 0 ; i <4 ; ++i)
	{
		Str[i] = UART_ReceiveByte();
	}
}
