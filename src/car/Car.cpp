#include "../../include/car/Car.hpp"

void Car::listParts() const
{
    std::cout << "Product parts: ";
    for (const auto& part: parts)
    {
        std::cout << part;
        if (part != parts.back())
        {
            std::cout << ", ";
        }
    }
    std::cout << std::endl << std::endl;
}

void Car::addPart(const std::string& part)
{
    this->parts.push_back(part);
}
