#ifndef ATO_H_
#define ATO_H_

#include "Arduino.h"



class Ato{
    public:
        Ato();
        bool doAto();
    private:
        int NORMAL_SENSOR = 5;//TODO set correct pin
        int RO_PUMP = 4;//TODO set correct pin
        bool firstTime = true;
        unsigned long startTime = 0;
        

};

#endif