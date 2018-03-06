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
#include "mechanum.h"
#include "project.h"

#ifdef __cplusplus
extern "C" {
#endif
#include <project.h>
#ifdef __cplusplus
}
#endif

class motor_driver
{
  private:
    int direction;
    int pwm_duty;
    int pwm_frequency;

  public:
    void motor_driver(int freq){ pwm_frequency = freq; }
    void brake();
    void stop();
    void CW();
    void CWW();
};


void hard_initialize() {
  PWM_1_Start();
  PWM_2_Start();
  PWM_3_Start();
  PWM_4_Start();
  PWM_5_Start();
  PWM_6_Start();
  PWM_7_Start();
  PWM_8_Start();
}

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    hard_initialize();

    for(;;)
    {
        /* Place your application code here. */

    }
}
/* [] END OF FILE */
