#include "app.h"

// *****************************************************************************
// Section: Local Function Declarations
// *****************************************************************************

void APP_TaskCreate(TaskFunction_t pxTaskCode, const char * const name);


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
    APP_TaskCreate(myTask1, "task1");
    APP_TaskCreate(myTask2, "task2");
    APP_TaskCreate(myTask3, "task3");
    APP_TaskCreate(myTask4, "task4");
    APP_TaskCreate(myTask5, "task5");
    
    /* Start FreeRTOS Scheduler */
    vTaskStartScheduler();
}



// *****************************************************************************
// Section: Other Function Definitions
// *****************************************************************************

/**
 * @Function APP_TaskCreate
 * @Brief Created to simplify the FreeRTOS xTaskCreate function
 * 
 * @param pxTaskCode    callback function
 * @param name          custom name for the task
 */
void APP_TaskCreate(TaskFunction_t pxTaskCode, const char * const name){
    xTaskCreate(
        pxTaskCode,                 //Task Callback Function
        name,                       //Task Custom Name
        200,                        //Task Size
        (void*)0,                   //Task Parameters
        tskIDLE_PRIORITY,           //Task Priority
        NULL                        //Task Hander
    );
}
