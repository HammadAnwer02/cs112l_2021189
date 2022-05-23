#pragma once
#include <iostream>
#include "Shapes.h"

class TwoDShapes : public Shapes 
{
    public:
    virtual double area() const;
};