# Definir a versão mínima do CMake
cmake_minimum_required(VERSION 3.10)

# Nome do projeto
project(SensorSystem VERSION 1.0 LANGUAGES C++)

# Definir o padrão do C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Definir onde encontrar os cabeçalhos
target_include_directories(MyProject PRIVATE ${PROJECT_SOURCE_DIR}/include)

# Variáveis de fontes e cabeçalhos
set(SOURCES
    src/SensorManager.cpp
    src/SensorPressao.cpp
    src/SensorTemperatura.cpp
)

# Adicionar executável
add_executable(SensorSystem main.cpp ${SOURCES})

# Adicionar flags de compilação, se necessário
target_compile_options(SensorSystem PRIVATE -Wall -Wextra -pedantic)

# Opcional: Diretório de testes
enable_testing()
add_subdirectory(tests)
