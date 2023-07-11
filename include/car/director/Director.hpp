#pragma once

#include <memory>
#include "../builder/Builder.hpp"

class Director
{
public:
    void setBuilder(const std::shared_ptr<Builder>& builder);
    void buildSportCar();
    void buildSUV();

private:
    std::shared_ptr<Builder> builder;
};
