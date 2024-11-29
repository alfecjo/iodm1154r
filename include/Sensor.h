#ifndef SENSOR_H
#define SENSOR_H

class Sensor
{

public:
    virtual ~Sensor() {}
    virtual float readValue() = 0;           // Método puro para leitura dos valores dos sensores
    virtual const char *getType() const = 0; // Retorna o tipo do sensorE
};

#endif