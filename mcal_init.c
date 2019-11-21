#include "mcal_init.h"

/*******************************************************************************
*  Function name    : init_vModules
*  Description      : Initializes all Modules         
*  List of arguments: no arguments  
*  Return value     : no return value
********************************************************************************/
void MCAL_vInit()
{
    OSC_vInit();        // initializare Osciloscop
    ADC_vInit();        // initializare ADC
    PWM1_vInit();       // Initilizare PWM
    INT_vInit();        // Initializare intreruperi
    SPI_RF_vInit();     //Initializes the SPI Module to work specifically with the 
                       //nRF24L01 RF Module. 
    TIM2_vInit();       //Initializes Timer 2 module
    TIM3_vInit();       //Initializes Timer 3 module
}