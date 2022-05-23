#include <iostream>
#include "Car.h"

#ifndef VITZ_H
#define VITZ_H


class Vitz : public Car
{
private:
    std::string model;
    std::string plateNumber;
public:
    Vitz(int, int, int, std::string, std::string, std::string);
    void set();
    void setModel(std::string);
    void setPlateNumber(std::string); 
    std::string getModel() const;
    std::string getPlateNumber() const;
    void printValue() ;
    ~Vitz();
};

#endif