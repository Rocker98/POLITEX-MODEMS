/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    int32 i=32;
    UART_1_Start();
    for(;;)
    {
        /* Place your application code here. */
        UART_1_UartPutCRLF(i);
        i++;
        if(i==127)
        {
            i=32;
        }
        CyDelay(500);
    }
}

/* [] END OF FILE */
