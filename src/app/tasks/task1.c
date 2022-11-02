#include "app.h"

// *****************************************************************************
// Section: Task Function Definition
// *****************************************************************************

/**
 * @Function myTask1
 * @Brief This is only a test: blink a LED
 * 
 * @param p     Required for FreeRTOS Library
 */
void myTask1 (void *p){
    
    // setup
    LED_DA_Clear();
    
    // loop
    while(1){
        LED_DA_Toggle();
        
        // FreeRTOS Task Delay
        vTaskDelay(100);
    }
}