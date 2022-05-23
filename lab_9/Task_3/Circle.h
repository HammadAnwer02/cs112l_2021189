#pragma once
#include <iostream>
#include "TwoDShapes.h"

class Circle : public TwoDShapes 
{
    private:
        double radius;
        std::string color;
    public:
        void setRadius(double);
        double getRadius() const;
        void setColor(std::string);
        std::string getColor() const;
        double area() const;
};