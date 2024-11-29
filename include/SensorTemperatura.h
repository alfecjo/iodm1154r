#ifndef SENSOR_TEMPERATURA_H
#define SENSOR_TEMPERATURA_H

#include "Sensor.h"

class SensorTemperatura:public Sensor
{
public:
    float readValue() override
    {
        // Lógica de leitura do sensor de temperatura
        return 11.1;
    }

    const char* getType()const override{
        return "Temperatura";
    }
};

#endif