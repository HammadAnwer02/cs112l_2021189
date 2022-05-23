#include "iostream"
#include "Square.h"

using namespace std;

void Square::setSide(double s) {
    side = s;
}
double Square::getSide() const {
    return side;
}
void Square::setColor(string c) {
    color = c;
}
string Square::getColor() const {
    return color;
}
double Square::area() const {
    return getSide() * getSide();
}
