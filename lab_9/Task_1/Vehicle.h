#include <iostream>

#ifndef VEHICLE_H
#define VEHICLE_H


class Vehicle
{
public:
    int numTires;
    int size;
    int numSeats;
    Vehicle(int = 0, int = 0, int = 0);
    virtual void set() = 0;
    void setNumTires(int);
    void setSize(int);
    void setNumSeats(int);
    int getNumTires() const;
    int getSize() const;
    int getNumSeats() const;
    virtual void printValue() = 0;
    ~Vehicle();
};

#endif


