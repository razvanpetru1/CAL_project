/* 
 * File:   hal_dc.h
 * Author: Razvan
 *
 * Created on 21 noiembrie 2019, 18:18
 */

#ifndef HAL_DC_H
#define	HAL_DC_H

void HAL_vInit();
void HAL_vSetMotorDir(BOOL BDirection);
void HAL_vSetMotorSpeed( T_F16 setDuty);


#endif	/* HAL_DC_H */

