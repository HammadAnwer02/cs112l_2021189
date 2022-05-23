#pragma once
#include <iostream>
#include "TwoDShapes.h"

class Square : public TwoDShapes 
{
    private:
        double side;
        std::string color;
    public:
        void setSide(double);
        double getSide() const;
        void setColor(std::string);
        std::string getColor() const;
        double area() const;
};