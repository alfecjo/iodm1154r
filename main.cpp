#include "SensorManager.h"
#include "SensorPressao.h"
#include "SensorTemperatura.h"
#include "SensorUmidade.h"


int main()
{
    SensorManager manager;

    // Criar e adicionar sensores ao gerenciador
    // adicionar sensor de pressão
    manager.addSensor(std::make_unique<SensorPressao>());
    // adicionar sensor de Temperatura
    manager.addSensor(std::make_unique<SensorTemperatura>());
    // adicionar sensor de Umidade
    manager.addSensor(std::make_unique<SensorUmidade>());
    // adicionar sensor de Umidade
    manager.addSensor(std::make_unique<SensorTemperatura>());
    // adicionar sensor de Umidade

    // Leitura dos sensorews
    manager.readAllSensors();

    return 0;
}
