#pragma once
#include <iostream>

class Shapes
{
    private:
        double length;
        double width;
    public:
    virtual double area() const = 0;
};