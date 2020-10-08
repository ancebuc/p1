project(practica0101p01)

set(CMAKE_CXX_STANDARD 14)


add_executable(P0101 Circunferencia.h Circunferencia.cpp Principal.cpp)

add_executable(P0101_tests Circunferencia.h Circunferencia.cpp catch.hpp Tests.cpp)
