#ifndef SENSOR_H_
#define SENSOR_H_

#include "arduino.h"

//#include "fishScheduler.h"

//class Ato: public FishSched{
class Sensor{
    public:
        Sensor();
        void evap();
        void empty();
        void fill();
        bool getInWater();
        void setInWater(bool val);
        bool getEmptied();
        bool getFilled();
        bool getEvaped();
        void setEmptied(bool val);
        void setFilled(bool val);
        void setEvaped(bool val);

    private:
        bool inWater = false;
        long EVAP_TIME = 300000;
        bool firstTimeEvap = true;
        long firstTime = 0;
        long TOP_OFF_TIME = 300000;
        bool firstTimeTopOff = true;
        long EMPTY_TIME = 120000;
        bool firstTimeEmpty = true;
        long FILL_TIME = 1200000;
        bool firstTimeFill = true;
        bool sensorReading = true;
        long timeUtilOutOfWater = 0;
        bool emptied = false;
        bool evaped = false;
        bool filled = false;

        

};
#endif