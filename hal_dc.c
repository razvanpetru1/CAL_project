
#include "general.h"
#include "hal_dc.h"
#include "mcal_pwm.h"

void HAL_vInit(){
    
    PWM1_vInit();
    GPIO_u8SetPortPin(PORT_A,9 ,DIGITAL ,OUTPUT);
    
}
void HAL_vSetMotorDir(BOOL BDirection){
  
        GPIO_u8WritePortPin(PORT_A,9 ,BDirection);
        
}
void HAL_vSetMotorSpeed( T_F16 setDuty){
   
        PWM1_vSetDuty(setDuty,2);
}
