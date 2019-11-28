#include "general.h"
#include "hal_servo.h"
#include "mcal_pwm.h"


void HAL_vSetServoAngle(T_F16 servo_angle){
    
     T_F16 dutyCycle;
     T_F16 resolution = 0.04375;
     
     if (servo_angle < 65){
         servo_angle = 65;
     }
     else if (servo_angle > 115){
         servo_angle =115;
     }
     
    if(servo_angle >= 10 && servo_angle <= 170){
           dutyCycle = (servo_angle -10 )*resolution +4;
    }
     PWM1_vSetDuty(dutyCycle,1);
    
}