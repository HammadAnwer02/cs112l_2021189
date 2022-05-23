
#include<iostream>
#include "Vitz.h"
#define read(type, var) type var; cin >> var;

using namespace std;



Vitz::Vitz(int _numTires, int _size, int _seats, string _color, string _model, string _plateNum) : Car(_numTires, _size, _seats, _color)
{
    setModel(_model);
    setPlateNumber(_plateNum);
}

void Vitz::set() {
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
    cout << "Enter the car's model number: ";
    read(string, _m)
    setModel(_m);
    cout << "Enter the car's plate number: ";
    read(string, _p)
    setPlateNumber(_p);
}

void Vitz::setModel(string _m) {
    model = _m;
}

void Vitz::setPlateNumber(string _pn) {
    plateNumber = _pn;
}


string Vitz::getModel() const {
    return model;
}

string Vitz::getPlateNumber() const {
    return plateNumber;
}

void Vitz::printValue()  {
    cout << "The number of tires are: " << getNumTires() << endl;
    cout << "The size of the car is: " << getSize() << endl;
    cout << "The number of seats of the car is: "  << getNumSeats() << endl;
    cout << "The model of the car is: " << getModel() << endl;
    cout << "The color of the car is: " << getColor() << endl;
    cout << "The plateNumber of the car is: " << getPlateNumber() << endl;
}


Vitz::~Vitz()
{
}
