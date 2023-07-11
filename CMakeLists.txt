cmake_minimum_required(VERSION 3.25)
project(builder)

set(CMAKE_CXX_STANDARD 23)

add_executable(builder main.cpp include/car/builder/Builder.hpp include/car/builder/CarBuilder.hpp src/car/builder/CarBuilder.cpp include/car/director/Director.hpp src/car/director/Director.cpp include/car/Car.hpp src/car/Car.cpp)
