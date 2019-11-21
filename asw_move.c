#include "general.h"
#include "asw_move.h"
#include "rte.h"
#include "hal_dc.h"

void Init(){
    RTE_vInit();
}
void Move(){

    RTE_vSetMotorDir(0);
    RTE_vSetMotorSpeed(50);
}
