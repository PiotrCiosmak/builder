#pragma once

class Builder
{
public:
    virtual void setEngin() const = 0;
    virtual void setSets() const = 0;
    virtual void setTripComputer() const = 0;
    virtual void reset() = 0;
};