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
#include <project.h>

int main (void)
{
    CyGlobalIntEnable;      /* Enable global interrupts */
    
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    
    LCD_Seg_1_Init();
    LCD_Seg_1_Enable();
    LCD_Seg_1_Start();
    
    uint8_t v = 0;
    for(;;)
    {
        /* Place your application code here */
        
        LCD_Seg_1_Write7SegDigit_0(v++, 0);
        CyDelay(300);
        if(v > 0xf) {
            v = 0;
        }
    }
}
