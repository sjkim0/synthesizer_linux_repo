/*
 * bsp.hpp
 *
 *  Created on: Apr 10, 2024
 *      Author: sjkim
 */

#ifndef BSP_BSP_HPP_
#define BSP_BSP_HPP_


#ifdef __cplusplus
extern "C"
{
#endif


#include "stm32g4xx_hal.h"


void bspInit(void);

void SystemClock_Config(void);
void Error_Handler(void);


#ifdef __cplusplus
}
#endif


#endif /* BSP_BSP_HPP_ */
