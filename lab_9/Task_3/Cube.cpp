#include <iostream>
#include "Cube.h"

using namespace std;

void Cube::setLength(double l) {
    length = l;
}
void Cube::setWidth(double w){
    width = w;
}
void Cube::setHeight(double h){
    height= h;
}
double Cube::getLength() const {
    return length;
}
double Cube::getWidth() const {
    return width;
}
double Cube::getHeight() const {
    return width;
}
double Cube::area() const {
    return getLength()*getLength() + getHeight() * getHeight() + getWidth() * getWidth();
}
double Cube::volume() const {
    return getLength() * getHeight() * getWidth();
}   
