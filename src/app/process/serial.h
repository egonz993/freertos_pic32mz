#ifndef _SERIAL_H    /* Guard against multiple inclusion */
#define _SERIAL_H

// *****************************************************************************
// Section: Function Prototypes
// *****************************************************************************

void UART5_Start( void );

void UART5_ClearRxBuffer( void );

void UART5_PrintRxBuffer( void );

int UART5_GetRxIndex( void );

char* UART5_GetRxBuffer( void );

#endif /* _SERIAL_H */