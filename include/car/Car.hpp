#pragma once

#include <iostream>
#include <vector>

class Car
{
public:
    void listParts() const;
    void addPart(const std::string& part);

private:
    std::vector<std::string> parts;
};