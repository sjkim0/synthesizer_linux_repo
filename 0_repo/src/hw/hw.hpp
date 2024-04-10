/*
 * hw.hpp
 *
 *  Created on: Apr 10, 2024
 *      Author: sjkim
 */

#ifndef HW_HW_HPP_
#define HW_HW_HPP_


#ifdef __cplusplus
extern "C"
{
#endif


#include "hw_def.hpp"
#include "gpio.h"
#include "spi.h"
#include "usart.h"


void hwInit(void);


#ifdef __cplusplus
}
#endif


#endif /* HW_HW_HPP_ */
