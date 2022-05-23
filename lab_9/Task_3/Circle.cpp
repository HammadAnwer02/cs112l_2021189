#include <iostream>

#include <cmath>
#include "Circle.h"

constexpr double PI = 3.141592653589793238463;

using namespace std;

void Circle::setRadius(double r) {
    radius = r;
}
double Circle::getRadius() const {
    return radius;
}
void Circle::setColor(string c) {
    color = c;
}
string Circle::getColor() const {
    return color;
}
double Circle::area() const {
    return PI * (getRadius() * getRadius());
}
