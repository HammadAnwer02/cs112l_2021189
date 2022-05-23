#include <iostream>

#include "Car.h"

using namespace std;
#define read(type, var) type var; cin >> var;

Car::Car(int _nT, int _s, int _seats, string _color) : Vehicle(_nT, _s, _seats)
{
    setColor(_color);
}


void Car::set()
{
    cout << "Enter the number of tires: ";
    read(int, nT)
    setNumTires(nT);
    cout << "Enter the size: ";
    read(int, _s)
    setSize(_s);
    cout << "Enter the number of seats: ";
    read(int, _nS)
    setNumSeats(_nS);
    cout << "Enter the color of the car: ";
    read(string, _c)
    setColor(_c);
}

void Car::setColor(string _c) {
    color =_c;
}

string Car::getColor() const {
    return color;
}

void Car::printValue()  {
    cout << "The number of the tires is: " << getNumTires() << endl;
    cout << "The size of the car is: " << getSize() << endl;
    cout << "The number of seats in the car is: " << getNumSeats() << endl;
    cout << "The color of the car is: "<< getColor() << endl;
}

Car::~Car()
{
}