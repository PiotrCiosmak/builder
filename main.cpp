#include "include/car/director/Director.hpp"
#include "include/car/builder/CarBuilder.hpp"

void clientCode(const std::shared_ptr<Director>& director);

int main()
{
    std::shared_ptr<Director> director = std::make_shared<Director>();
    clientCode(director);
}

void clientCode(const std::shared_ptr<Director>& director)
{
    std::shared_ptr<CarBuilder> builder = std::make_shared<CarBuilder>();
    director->setBuilder(builder);

    std::cout << "Build Sport Car:" << std::endl;
    director->buildSportCar();
    std::shared_ptr<Car> car = builder->getCar();
    car->listParts();

    std::cout << "Build SUV:" << std::endl;
    director->buildSUV();
    car = builder->getCar();
    car->listParts();
}