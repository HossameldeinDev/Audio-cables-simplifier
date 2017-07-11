/*
 * UART.h
 *
 *  Created on: Dec 11, 2015
 *      Author: hussam_mostafa
 */

#ifndef UART_H_
#define UART_H_

#include "common_macros.h"
#include "std_types.h"
#include "micro_config.h"

void UART_Init(void);
void UART_SendByte(uint8 data);
uint8 UART_ReceiveByte(void);
void UART_SendString(  uint8 *str);
void UART_ReceiveString(uint8 *Str);
#endif /* UART_H_ */
