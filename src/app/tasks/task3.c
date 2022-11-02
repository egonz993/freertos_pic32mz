#include "app.h"

// *****************************************************************************
// Section: Task Function Definition
// *****************************************************************************

/**
 * @Function myTask3
 * @Brief This is only a test: blink a LED
 * 
 * @param p     Required for FreeRTOS Library
 */
void myTask3 (void *p){
    
    // setup
    LED_BC_Clear();
    
    // loop
    while(1){
        LED_BC_Toggle();
        
        // FreeRTOS Task Delay
        vTaskDelay(300);
    }
}