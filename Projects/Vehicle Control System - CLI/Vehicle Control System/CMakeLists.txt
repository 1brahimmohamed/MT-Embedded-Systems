cmake_minimum_required(VERSION 3.22)
project(Vehicle_Control_System C)

set(CMAKE_C_STANDARD 11)

add_executable(
        Vehicle_Control_System
        src/main.c
        src/mainMenu.c
        src/mainMenu.h
        src/vehicleState.c
        src/vehicleState.h
#        src/test.c
        )
