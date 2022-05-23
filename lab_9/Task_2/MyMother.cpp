#include <iostream>
#include "MyMother.h"


using namespace std;

MyMother::MyMother(string n, string e, string c, string hc) {
    setName(n);
    setEye(e);
    setColor(c);
    setHairColor(hc);
}

void MyMother::set()
{

}

void MyMother::setName(string n) 
{
    name = n;
}

string MyMother::getName() const {
    return name;
}

void MyMother::setEye(string e) 
{
    eye = e;
}

string MyMother::getEye() const {
    return eye;
}

void MyMother::setColor(string c)
{
    color = c;
}

string MyMother::getColor() const {
    return color;
}

void MyMother::setHairColor(string hc)
{
    hairColor = hc;
}

string MyMother::getHairColor() const {
    return hairColor;
}



MyMother::~MyMother() {
    
}


