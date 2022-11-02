#include "app.h"

// *****************************************************************************
// Section: Local Function Declarations
// *****************************************************************************

TaskHandle_t taskHandle1 = NULL;
TaskHandle_t taskHandle2 = NULL;
TaskHandle_t taskHandle3 = NULL;
TaskHandle_t taskHandle4 = NULL;
TaskHandle_t taskHandle5 = NULL;


// *****************************************************************************
// Section: Main Function Definition
// *****************************************************************************

/**
 * @Function APP_Init
 * @Brief Create FreeRTOS Task and Start the Scheduler
 */
void APP_Init( void ){
    
    /* Welcome Message */
    printf("\n***************************************************************");
    printf("\nSTART APPLICATION");
    printf("\n***************************************************************");
    printf("\n\n");
    
    /* Create FreeRTOS Tasks */ 
    //xTaskCreate(callback, name, size, parameters, &taskHandle);
    xTaskCreate(myTask1, "task1", 200, NULL, tskIDLE_PRIORITY, &taskHandle1);
    xTaskCreate(myTask2, "task2", 200, NULL, tskIDLE_PRIORITY, &taskHandle2);
    xTaskCreate(myTask3, "task3", 200, NULL, tskIDLE_PRIORITY, &taskHandle3);
    xTaskCreate(myTask4, "task4", 200, NULL, tskIDLE_PRIORITY, &taskHandle4);
    xTaskCreate(myTask5, "task5", 200, NULL, tskIDLE_PRIORITY, &taskHandle5);
    
    /* Start FreeRTOS Scheduler */
    vTaskStartScheduler();
}


TaskHandle_t APP_getTaskHandle(int handle){
    switch(handle){
        case 1: 
            return taskHandle1;
            break;
        case 2: 
            return taskHandle2;
            break;
        case 3: 
            return taskHandle3;
            break;
        case 4: 
            return taskHandle4;
            break;
        case 5: 
            return taskHandle5;
            break;
        default: 
            return NULL;
            break;
    }
    
    
    return NULL;
}