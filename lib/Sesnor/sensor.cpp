#include "sensor.h"

Sensor::Sensor(){
    ;
}

void Sensor::evap(){
    if(!evaped){
        if(firstTimeEvap){
            firstTimeEvap = false;
            firstTime = millis();
        }
        long elapse = millis() - firstTime;
        if(elapse > EVAP_TIME){
            inWater = true; // sensor reads in reverse  inWater = true in out of water
            evaped = true;
            Serial.println("Fully evaporated");
        }
    }
}

void Sensor::empty(){
    if(!emptied){
        if(firstTimeEmpty){
            firstTimeEmpty = false;
            firstTime = millis();
        }
        long elaspe = millis() - firstTime;
        if(elaspe > EMPTY_TIME){
            inWater = true;
            emptied = true;
        }
    }
}

void Sensor::fill(){
    if(!filled){
        if(firstTimeFill){
            firstTimeFill = false;
            firstTime = millis();
        }
    }
    long elaspe = millis() - firstTime;
    if(elaspe > FILL_TIME){
        inWater = false;
        filled = true;
    }
}

bool Sensor::getInWater(){
    return inWater;
}

void Sensor::setInWater(bool val){
    inWater = val;
}
        bool Sensor::getEmptied(){
            return emptied;
        }
        bool Sensor::getFilled(){
            return filled;
        }
        bool Sensor::getEvaped(){
            return evaped;
        }
        void Sensor::setEmptied(bool val){
            emptied = val;
        }
        void Sensor::setFilled(bool val){
            filled = val;
        }
        void Sensor::setEvaped(bool val){
            evaped = val;
        }

