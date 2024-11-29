#ifndef SENSOR_REAL_TIME_CLOCK_H
#define SENSOR_REAL_TIME_CLOCK_H

#include "Sensor.h"

class SensorRealTimeClock : public Sensor
{
public:
    float readValue() override
    {
        // Lógica de leitura do sensor de temperatura
        return 45.7;
    }

    const char *getType() const override
    {
        return "Umidade";
    }
};
#endif