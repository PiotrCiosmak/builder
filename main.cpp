#include <iostream>
#include "include/car/director/Director.hpp"
#include "include/car/builder/CarBuilder.hpp"
#include <memory>

void clientCode(Director& director)
{
    std::unique_ptr<CarBuilder> builder{new CarBuilder()};
    director.setBuilder(builder.get());

    std::cout << "Build Sport Car:\n";
    director.buildSportCar();
    std::unique_ptr<Car> car = builder->getCar();
    car->listParts();

    std::cout << "Build SUV:\n";
    director.buildSUV();
    car = builder->getCar();
    car->listParts();
}

int main()
{
    std::unique_ptr<Director> director{new Director()};
    clientCode(*director);
}
