/*
 * ap.cpp
 *
 *  Created on: Apr 10, 2024
 *      Author: sjkim
 */


#include "ap.hpp"


void apInit(void)
{
    hwInit();

    osKernelInitialize();
    MX_FREERTOS_Init();

}

void apMain(void)
{
    osKernelStart();

    while(true)
    {

    }
}
