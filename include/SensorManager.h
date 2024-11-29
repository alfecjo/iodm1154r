#ifndef SENSOR_MANAGER_H
#define SENSOR_MANAGER_H

#include <iostream>
#include <vector>
#include <memory> // Uso de smat pointers
#include "Sensor.h"

class SensorManager
{
private:
    std::vector<std::unique_ptr<Sensor>> sensors;

public:
    void addSensor(std::unique_ptr<Sensor> sensor)
    {
        sensors.push_back(std::move(sensor));
    }

    void readAllSensors() const
    {
        for (const auto& sensor : sensors)
        {
            printf("Sensor: %s, - Valor: %.2f\n", sensor->getType(), sensor->readValue());
        }
    }

    ~SensorManager() = default;
};

#endif