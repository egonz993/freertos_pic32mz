#include "app.h"

// *****************************************************************************
// Section: Task Function Definition
// *****************************************************************************

/**
 * @Function myTask4
 * @Brief This is only a test: blink a LED
 * 
 * @param p     Required for FreeRTOS Library
 */
void myTask4 (void *p){
    
    // setup
    LED_CD_Clear();
    
    // loop
    while(1){
        LED_CD_Toggle();
        
        // FreeRTOS Task Delay
        vTaskDelay(400);
    }
}