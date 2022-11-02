/**
 * FreeRTOS Basic Implementation
 *
 * @Company     Telemetria Industrial, Telemetrik SAS
 * @Date        November 02th 2022
 * @Author      E'Gonzalez
 * @Version     1.0.0
 */


/*******************************************************************************
  Main Source File

  File Name:
    main.c

  Summary:
    This file contains the "main" function for a project.

  Description:
    The "main" function calls the "SYS_Initialize" function to initialize the
    state machines of all modules in the system. Then, calls the APP_Init
    function to initialize the application and create FreeRTOS tasks.
 *******************************************************************************/



// *****************************************************************************
// Section: Main Entry Point
// *****************************************************************************

#include "app.h"

int main ( void ){
    
    /* Initialize System Modules */
    SYS_Initialize(NULL);
    
    /* Initialize Application and Create FreeRTOS Tasks */
    //SYS_Tasks();
    APP_Init();
    
    /* Execution should not come here during normal operation */
    return (EXIT_FAILURE);
    
}


/*******************************************************************************
 End of File
*/