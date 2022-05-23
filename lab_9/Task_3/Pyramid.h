#pragma once
#include <iostream>
#include "ThreeDShapes.h"

class Pyramid: public ThreeDShapes
{
    private:
        double base;
        double height;
        double getSlantLength() const;
    public:
        
        void setBase(double);
        void setHeight(double);
        double getBase() const;
        double getHeight() const; 
        double area() const;
        double volume() const;
};