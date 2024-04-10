/*
 * hw.cpp
 *
 *  Created on: Apr 10, 2024
 *      Author: sjkim
 */



#include "hw.hpp"


void hwInit(void)
{
    MX_GPIO_Init();
    MX_LPUART1_UART_Init();
    MX_SPI1_Init();
}
