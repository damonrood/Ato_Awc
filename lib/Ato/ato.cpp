#include "ato.h"

Ato::Ato(){
    ;

}

bool Ato::doAto(){
    bool retVal = false;
   
    
    int pin = digitalRead(NORMAL_SENSOR);

    if(pin == 1){
        digitalWrite(RO_PUMP,HIGH);
    }else{
        digitalWrite(RO_PUMP,LOW);
    }
    return retVal;
}