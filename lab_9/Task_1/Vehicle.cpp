#include <iostream>
#include "Vehicle.h"
using namespace std;

Vehicle::Vehicle(int _nT, int _s, int _nS)
{
    numTires = _nT;
    size = _s;
    numSeats = _nS;
}

int Vehicle::getNumTires() const {
    return numTires;
}

int Vehicle::getSize() const {
    return size;
}

int Vehicle::getNumSeats() const {
    return numSeats;
}

void Vehicle::setNumSeats(int ns) {
    numSeats = ns;
}

void Vehicle::setNumTires(int nt) {
    numTires = nt;
}

void Vehicle::setSize (int s) {
    size = s;
}

Vehicle::~Vehicle()
{
}