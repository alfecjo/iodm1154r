#ifndef SENSOR_LUMINOSIDADE
#define SENSOR_LUMINOSIDADE

#include "Sensor.h"

class SensorLuminosidade : public Sensor
{    
public:
    float readValue() override
    {
        // Lógica de leitura do sensor de pressão
    return 120.5;
    }
    
    const char* getType() const override{
        return "Luminosidade ";
    }
};
#endif