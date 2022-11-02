#include "app.h"

// *****************************************************************************
// Section: Task Function Definition
// *****************************************************************************

/**
 * @Function myTask5
 * @Brief Print by UART5 a counter sequence and the rxBuffer if data received
 * 
 * @param p     Required for FreeRTOS Library
 */
void myTask5 (void *p){
    
    // Setup
    UART5_Start();

    // Loop
    while(1){
        // Declare counter as static
        static int cnt = 0;
        
        // Print cnt value and increment it
        printf("Count: %i\n", cnt++);
        
        // Print the rxBuffer only when data is received
        if(UART5_GetRxIndex() > 0){
            UART5_PrintRxBuffer();
            UART5_debugging();
            UART5_ClearRxBuffer();
        }
        
        // FreeRTOS Task Delay
        vTaskDelay(1000);
    }
}