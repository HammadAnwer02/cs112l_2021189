#include <iostream>
#include "MyFather.h"


using namespace std;


MyFather::MyFather(string n, string e, string c, string hc) {
    setName(n);
    setEye(e);
    setColor(c);
    setHairColor(hc);
}

void MyFather::set()
{

}

void MyFather::setName(string n) 
{
    name = n;
}

string MyFather::getName() const {
    return name;
}

void MyFather::setEye(string e) 
{
    eye = e;
}

string MyFather::getEye() const {
    return eye;
}

void MyFather::setColor(string c)
{
    color = c;
}

string MyFather::getColor() const {
    return color;
}

void MyFather::setHairColor(string hc)
{
    hairColor = hc;
}

string MyFather::getHairColor() const {
    return hairColor;
}



MyFather::~MyFather() {
    
}


