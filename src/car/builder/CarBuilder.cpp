#include "../../../include/car/builder/CarBuilder.hpp"

CarBuilder::CarBuilder()
{
    this->reset();
}

void CarBuilder::setEngin() const
{
    this->car->addPart("engin");
}

void CarBuilder::setSets() const
{
    this->car->addPart("seat");
}

void CarBuilder::setTripComputer() const
{
    this->car->addPart("trip computer");
}

std::unique_ptr<Car> CarBuilder::getCar()
{
    std::unique_ptr<Car> result{std::move(this->car)};
    this->reset();
    return result;
}

void CarBuilder::reset()
{
    this->car = std::make_unique<Car>();
}
