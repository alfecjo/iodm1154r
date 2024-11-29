#ifndef SENSOR_PRESSAO_H
#define SENSOR_PRESSAO_H

#include "Sensor.h"

class SensorPressao : public Sensor
{    
public:
    float readValue() override
    {
        // Lógica de leitura do sensor de pressão
    return 99.9;
    }
    
    const char* getType() const override{
        return "Presão ";
    }
};
#endif