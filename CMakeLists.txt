# Definir a versão mínima do CMake
cmake_minimum_required(VERSION 3.10)

# Nome do projeto
project(SensorSystem VERSION 1.0 LANGUAGES CXX)

# Definir o padrão do C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Configurar fontes e cabeçalhos
set(SOURCES
    src/sensor/SensorManager.cpp
    src/sensor/SensorPressao.cpp
    src/sensor/SensorTemperatura.cpp
)

set(HEADERS
    include/Sensor.h
    include/SensorManager.h
    include/SensorPressao.h
    include/SensorTemperatura.h
)

# Adicionar diretório de cabeçalhos
include_directories(${PROJECT_SOURCE_DIR}/include)

# Adicionar executável principal
add_executable(SensorSystem main.cpp ${SOURCES})

# Configurações específicas para o Raspberry Pi
if(CMAKE_SYSTEM_PROCESSOR STREQUAL "armv7l")
    target_compile_options(SensorSystem PRIVATE -mcpu=cortex-a53 -mfpu=neon-vfpv4 -mfloat-abi=hard)
endif()

# Adicionar flags de compilação gerais
target_compile_options(SensorSystem PRIVATE -Wall -Wextra -pedantic)

# Linkar bibliotecas externas (ex.: WiringPi)
find_library(WIRINGPI_LIB wiringPi REQUIRED)
target_link_libraries(SensorSystem PRIVATE ${WIRINGPI_LIB})

# Configurar testes com Google Test
enable_testing()

# Encontrar e incluir o Google Test
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Adicionar executável de testes
add_executable(SensorTests tests/Main_Tests.cpp ${SOURCES})
target_link_libraries(SensorTests PRIVATE GTest::GTest GTest::Main pthread)

# Adicionar caso de teste
add_test(NAME TestSensors COMMAND SensorTests)