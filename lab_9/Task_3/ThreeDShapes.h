#pragma once
#include <iostream>
#include "Shapes.h"

class ThreeDShapes
{
private:
    
public:
    virtual double area() const;
    virtual double volume() const = 0;
};

