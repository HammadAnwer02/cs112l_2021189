#include <iostream>
#include "Vehicle.h"

#ifndef CAR_H
#define CAR_H


class Car : public Vehicle
{
private:
    std::string color;
public:
   Car(int, int, int, std::string);
   void set();
   void setColor(std::string);
   std::string getColor() const;
   void printValue() ;
   ~Car();
};




#endif