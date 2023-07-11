#include "../../../include/car/director/Director.hpp"

void Director::setBuilder(const std::shared_ptr<Builder>& builder)
{
    this->builder = builder;
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