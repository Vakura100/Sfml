cmake_minimum_required(VERSION 3.24)
project(Alex)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Alex
        Coche.cpp
        Coche.h main.cpp)
