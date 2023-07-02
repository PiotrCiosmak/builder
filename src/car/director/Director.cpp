#include "../../../include/car/director/Director.hpp"

void Director::setBuilder(Builder* builder)
{
    this->builder = std::unique_ptr<Builder>(builder);
}

void Director::buildSportCar()
{
    this->builder->setEngin();
    this->builder->setSets();
}

void Director::buildSUV()
{
    this->builder->setEngin();
    this->builder->setSets();
    this->builder->setTripComputer();
}