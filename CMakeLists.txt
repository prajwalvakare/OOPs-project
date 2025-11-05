cmake_minimum_required(VERSION 3.31)
project(OOPSProject)

set(CMAKE_CXX_STANDARD 20)
include_directories(include)
add_executable(OOPSProject
        include/AirObject.h
        include/Aircraft.h
        src/Aircraft.cpp
        include/commercialAircraft.h
        src/ComercialAircraft.cpp
        include/MilitaryAircraft.h
        src/MilitaryAircraft.cpp
        include/CargoAircraft.h
        src/CargoAircraft.cpp
        include/RadarSystem.h
        src/RadarSystem.cpp
        src/main.cpp)
