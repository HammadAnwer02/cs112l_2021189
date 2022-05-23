#include <iostream>

#include "MySister.h"
#include <string>

using namespace std;

#define read(type, var) type var; cin >> var;

MySister::MySister(string n,string e, string c,string  hc, int a, string edu)
: MyFather(n, e, c, hc)
{
    setAge(a);
    setEducation(edu);
}

void MySister::set() {
    cout << "Enter your Name: ";
    string text;
    getline(cin, text);
    MyFather::setName(text);
    cout << "Enter the color of your eyes: ";
    getline(cin, text);
    MyFather::setEye(text);
    cout << "Enter the Color of your face: ";
    getline(cin, text);
    MyFather::setColor(text);
    cout << "Enter your hair color: ";
    getline(cin, text);
    MyFather::setHairColor(text);
    cout << "Enter your age: ";
    read(int, a)
    setAge(a);
    cout << "Enter your education: ";
    getline(cin, text);
    setEducation(text);
}

void MySister::setAge(int a) 
{
    age = a;
}

int MySister::getAge() const {
    return age;
}

void MySister::setEducation(string edu) 
{
    education = edu;
}

string MySister::getEducation() const {
    return education;
}

void MySister::printInfo()  {
    cout << "Name: " << MyFather::getName() << endl
        << "Eye: " << MyFather::getEye() << endl
        << "Color: " << MyFather::getColor() << endl
        << "HairColor: " << MyFather::getColor() << endl
        << "Age: " << getAge() << endl
        << "Education: " << getEducation() << endl;
}

MySister::~MySister()
{
}