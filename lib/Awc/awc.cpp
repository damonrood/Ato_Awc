#include "awc.h"

Awc::Awc(){
    ;
}

bool Awc::doAwc(){
    if(firstTimeEmpty){
        start = millis();
        firstTimeEmpty = false;
    }
    if(digitalRead(LOW_SENSOR)){//out of water
        digitalWrite(SUMP_PUMP,1);
        awcRunning = true;
    }else{
        digitalWrite(SUMP_PUMP,0);
        elapse = (millis()-start);
        emptyTime = elapse*1000;
        emptyHappened = true;
    }

    if(digitalRead(NORMAL_SENSOR) && emptyHappened){//out of water
        if(firstTimeFill){
            start = millis();
            firstTimeFill = false;
        }
        digitalWrite(NEW_PUMP,1);
    }else{
        digitalWrite(NEW_PUMP,0);
        //fillHappened = true;
        elapse = millis()-start;
        fillTime = elapse*1000;
        emptyHappened = false;
        awcRunning = false;
        firstTimeEmpty = true;
        firstTimeFill = true;
    }
    //is low out of water
    //run sump pump
    //empty happened
    //is normal in water
    //run new pump
    return elapse;
}

bool Awc::getAwcRunning(){
    return awcRunning;
}
int Awc::getEmptyTime(){
    return emptyTime;
}

int Awc::getFillTime(){
    return fillTime;
}
