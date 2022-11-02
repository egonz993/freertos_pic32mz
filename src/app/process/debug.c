#include "app.h"

/* ************************************************************************** */
/* Section: Function Definitions                                              */
/* ************************************************************************** */

/**
 * Function: debugging
 * ----------------------------
 * Interpreter Calling for Command Debbuging
 */
void UART5_debugging(void){
    if(debbuggingCommands(UART5_GetRxBuffer())){
        UART5_ClearRxBuffer();
    }
}

/**
 * Function: debbuggingCommands
 * ----------------------------
 * Interpreter for command debbuging
 * Extended Functions...
 * 
 * Returns false if any command if executed
 * Returns true  if any command recognized
 * 
 *  init            Reset Device
 */
bool debbuggingCommands(char *buffer){
    
    /* Extendend Features for Debugging */
    
    //Reset Device
    if (strstr(buffer, "reset") && strlen(buffer) == 5){
        SYS_RESET_SoftwareReset();
        return true;
    }
    
    if (strstr(buffer, "sTask") && strlen(buffer) == 6){
        int x = (int)buffer[5] - 0x30;
        vTaskSuspend(APP_getTaskHandle(x));
        return true;
    }
    
    if (strstr(buffer, "rTask") && strlen(buffer) == 6){
        int x = (int)buffer[5] - 0x30;
        vTaskResume(APP_getTaskHandle(x));
        return true;
    }
    
    return false;
}

