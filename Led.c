#include "led.h"
#include "general.h"

T_U16 valPin = 0;
int counter = 0;

void Secventa1(){
  
    counter++;
    if(counter == 20 ){
        counter = 0;
    }
    if(counter%2 == 0 &&  counter < 10){
             valPin =! valPin;
             GPIO_u8WritePortPin(PORT_A, 10, valPin);
    }            
    
}
