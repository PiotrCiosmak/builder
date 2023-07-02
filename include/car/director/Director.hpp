#pragma once

#include "../builder/Builder.hpp"
#include <memory>

class Director
{
public:
    void setBuilder(Builder* builder);
    void buildSportCar();
    void buildSUV();
private:
    std::unique_ptr<Builder> builder;
};
