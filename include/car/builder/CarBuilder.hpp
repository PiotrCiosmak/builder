#pragma once

#include "Builder.hpp"
#include "../Car.hpp"
#include <memory>

class CarBuilder : public Builder
{
public:
    CarBuilder();
    void setEngin() const override;
    void setSets() const override;
    void setTripComputer() const override;
    std::unique_ptr<Car> getCar();
    void reset() override;
private:
    std::unique_ptr<Car> car;
};