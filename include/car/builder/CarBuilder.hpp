#pragma once

#include <memory>
#include "../Car.hpp"
#include "Builder.hpp"

class CarBuilder : public Builder
{
public:
    CarBuilder();
    void setEngin() const override;
    void setSets() const override;
    void setTripComputer() const override;
    [[nodiscard]] std::shared_ptr<Car> getCar();
    void reset() override;

private:
    std::shared_ptr<Car> car;
};