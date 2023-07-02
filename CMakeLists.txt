cmake_minimum_required(VERSION 3.25)
project(builder)

set(CMAKE_CXX_STANDARD 23)

add_executable(builder main.cpp src/car/Car.cpp include/car/builder/Builder.hpp src/car/builder/CarBuilder.cpp src/car/director/Director.cpp)
