#include "app.h"

// *****************************************************************************
// Section: Task Function Definition
// *****************************************************************************

/**
 * @Function myTask2
 * @Brief This is only a test: blink a LED
 * 
 * @param p     Required for FreeRTOS Library
 */
void myTask2 (void *p){
    
    // setup
    LED_AB_Clear();
    
    // loop
    while(1){
        LED_AB_Toggle();
        
        // FreeRTOS Task Delay
        vTaskDelay(200);
    }
}