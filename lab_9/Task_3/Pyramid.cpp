#include <iostream>
#include "Pyramid.h"
#include <cmath>

using namespace std;


double Pyramid::getSlantLength() const {
    return sqrt(pow(base/2, 2)  + pow(height, 2));
}

void Pyramid::setBase(double b) {
     base = b;
}
void Pyramid::setHeight(double h){
    height = h;
}
double Pyramid::getBase() const {
    return base;
}
double Pyramid::getHeight() const {
    return height;
}
double Pyramid::area() const {
  return pow(getBase(), 2) + getBase()*getSlantLength()*2;
}
double Pyramid::volume() const {
    return pow(getBase(), 2) * getHeight() / 3;

}
