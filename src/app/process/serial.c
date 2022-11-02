#include "app.h"

// *****************************************************************************
// Section: Local Variables
// *****************************************************************************

char rxBuffer[256];
int rxIndex = 0;
uint8_t rxByte;

// *****************************************************************************
// Section: Function Definitions
// *****************************************************************************

/**
 * @Function UART5_ReadCallback
 * @Brief This function is executed as interrupt when UART_5 receive data
 * 
 * @param context   Required for UART Library purpose
 */
void UART5_ReadCallback(uintptr_t context){
    if(UART5_ErrorGet() == UART_ERROR_NONE){
        // Update rxBuffer with new received data
        rxBuffer[rxIndex++] = rxByte;
    
        // Continue Reading, wait for next interrupt
        UART5_Read(&rxByte, 1);
    }
}

/**
 * @Function UART5_Start
 * @Brief This start UART5 Interrupt for reading data
 * 
 */
void UART5_Start( void ){
    // Register the callback function
    UART5_ReadCallbackRegister(UART5_ReadCallback, 0);
    
    // Start Reading, wait for first interrupt
    UART5_Read(&rxByte, 1);
}

/**
 * @Function UART5_ClearBuffer
 * @Brief Clear rxBuffer
 * 
 */
void UART5_ClearRxBuffer( void ){
    rxIndex = 0;
    int i;
    for(i=0; i<sizeof(rxBuffer);i++){
        rxBuffer[i] = 0;
    }
}

/**
 * @Function UART5_PrintBuffer
 * @Brief Print rxBuffer
 * 
 */
void UART5_PrintRxBuffer( void ){
    printf("\n>> Data Received in UART_5:\n%s\n\n", rxBuffer);
}

/**
 * @Function UART5_GetRxInIndex
 * @Brief Export Local Variable rxBuffer
 * 
 * @return rxInIndex
 */
int UART5_GetRxIndex( void ){
    return rxIndex;
}

/**
 * @Function UART5_GetRxInIndex
 * @Brief Export Local Variable rxBuffer
 * 
 * @return rxInIndex
 */
char* UART5_GetRxBuffer( void ){
    return rxBuffer;
}