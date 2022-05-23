#pragma once
#include <iostream>

#include "ThreeDShapes.h"

class Cube : public ThreeDShapes
{
    private:
        double length;
        double width;
        double height;
    public:
        void setLength(double);
        void setWidth(double);
        void setHeight(double);
        double getLength() const;
        double getWidth() const;
        double getHeight() const;
        double area() const;
        double volume() const;
        
};
