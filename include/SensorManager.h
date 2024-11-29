#ifndef SENSOR_MANAGER_H
#define SENSOR_MANAGER_H

#include <iostream>
#include <vector>
#include "Sensor.h"

class SensorManager
{
private:
    std::vector<Sensor *> sensors;

public:
    SensorManager(/* args */);
    ~SensorManager();

    void addSensor(Sensor *sensor)
    {
        sensors.push_back(sensor);
    }

    void readAllSensors()
    {
        for (Sensor *sensor : sensors)
        {
            printf("Sensor: %s, - Valor: %.2f\n", sensor->getType(), sensor->readValue());
        }
    }

    ~SensorManager()
    {
        for (Sensor *sensor : sensors)
        {
            delete sensor; //Libera memória
        }
    }
};

#endif