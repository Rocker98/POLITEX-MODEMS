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
#define period 200

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    IDAC_Start();
    
    for(;;)
    {
        /* Place your application code here. */
        IDAC_SetValue(0);
        CyDelay(25);
        IDAC_SetValue(50);
        CyDelay(period);
        
        
        IDAC_SetValue(127);
        CyDelay(period);
        
        
        
        IDAC_SetValue(-127);
        CyDelay(period);
        IDAC_SetValue(-127);
        CyDelay(period);
        IDAC_SetValue(50);
        CyDelay(period);
        IDAC_SetValue(50);
        CyDelay(period);
        IDAC_SetValue(0);
        CyDelay(25);
    }
}

/* [] END OF FILE */
