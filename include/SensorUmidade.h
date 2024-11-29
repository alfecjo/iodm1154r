#ifndef SENSOR_UMIDADE_H
#define SENSOR_TEMPERATURA_H

#include "Sensor.h"

class SensorUmidade:public Sensor
{
public:
    float readValue() override
    {
        // Lógica de leitura do sensor de temperatura
        return 45.7;
    }

    const char* getType()const override{
        return "Umidade";
    }
};
#endif