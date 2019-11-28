#include"general.h"
#include"hal_servo.h"
#include"rte.h"
#include "asw_servo.h"


void Angle(T_F16 angle){
    RTE_vSetServoAngle(angle);
}
void LeftRight(){
    BOOL flag = 1;
    int angle = 90 ;
    while(1){
           while (flag == 1 && angle <= 115 ){
            Angle(angle);
            angle++;
            if (angle ==  115 ){
                flag = 0;
            }
        }
        while (flag == 0 && angle >= 65 ){
            Angle(angle);
            angle--;
            if(angle == 65){
                flag = 1;
            }
        }
    }
}