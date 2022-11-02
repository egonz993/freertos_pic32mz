#ifndef _APP_H    /* Guard against multiple inclusion */
#define _APP_H

// *****************************************************************************
// Section: Includes
// *****************************************************************************

/* C Standard Libraries */
//#include <plib.h>                     // C Old Legacy Peripheral
#include <stdlib.h>                     // C Standard Library
#include <stddef.h>                     // C Standard Definitions
#include <stdio.h>                      // C Standard Input/Output
#include <stdbool.h>                    // C Standard Boolean Types
#include <stdint.h>                     // C Standard Integer Types
#include <string.h>                     // C String Operators
#include <math.h>                       // C Math Functions

/* System Definitions */
#include "definitions.h"                // SYS Function Prototypes

/* FreeRTOS Headers */
#include "FreeRTOS.h"                   // FreeRTOS Main Library
#include "task.h"                       // FreeRTOS Task Library

/* Application Headers */
#include "tasks.h"                      // Task Definitions
#include "serial.h"                     // UART5 Functions
#include "debug.h"                      // UART5 Debug Funtions



// *****************************************************************************
// Section: Function Prototypes
// *****************************************************************************

void APP_Init( void );

TaskHandle_t APP_getTaskHandle(int handle);

// *****************************************************************************
// Section: Geters & Setters
// *****************************************************************************



#endif /* _APP_H */