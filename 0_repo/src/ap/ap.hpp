/*
 * ap.hpp
 *
 *  Created on: Apr 10, 2024
 *      Author: sjkim
 */

#ifndef AP_AP_HPP_
#define AP_AP_HPP_


#ifdef __cplusplus
extern "C"
{
#endif


#include "hw.hpp"
#include "cmsis_os.h"
#include "app_freertos.h"


void apInit(void);
void apMain(void);


#ifdef __cplusplus
}
#endif


#endif /* AP_AP_HPP_ */
