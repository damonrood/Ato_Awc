#ifndef AWC_H_
#define AWC_H_

#include "Arduino.h"



class Awc{
    public:
        Awc();
        bool doAwc();
        bool getAwcRunning();
        int getEmptyTime();
        int getFillTime();
    private:
        int LOW_SENSOR = 7;//TODO set correct pin
        int NORMAL_SENSOR = 4;//TODO set correct pin
        int SUMP_PUMP = 8;//TODO set correct pin
        int NEW_PUMP = 10;//TODO set correct pin

        bool emptyHappened = false;
        bool fillHappened = false;
        bool atoRunning = false;
        bool awcRunning = false;
        bool firstTimeEmpty = true;
        bool firstTimeFill = true;
        int elapse = 0;
        long start = 0;
        int emptyTime = 0;
        int fillTime = 0;

};

#endif