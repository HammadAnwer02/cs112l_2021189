#include <iostream>
#include "MySelf.h"
#include <string>

#define read(type, var) type var; cin >> var;

using namespace std;

MySelf::MySelf(string n,string e, string c,string  hc, int a, string edu)
: MyFather(n, e, c, hc)
{
    setAge(a);
    setEducation(edu);
}

void MySelf::set() {
    cout << "Enter your Name: ";
    string text;
    getline(cin, text);
    setName(text);
    cout << "Enter the color of your eyes: ";
    getline(cin, text);
    setEye(text);
    cout << "Enter the Color of your face: ";
    getline(cin, text);
    setColor(text);
    cout << "Enter your hair color: ";
    getline(cin, text);
    setHairColor(text);
    cout << "Enter your age: ";
    read(int, a)
    setAge(a);
    cout << "Enter your education: ";
    getline(cin, text);
    setEducation(text);
}

void MySelf::setAge(int a) 
{
    age = a;
}

int MySelf::getAge() const {
    return age;
}

void MySelf::setEducation(string edu) 
{
    education = edu;
}



string MySelf::getEducation() const {
    return education;
}

void MySelf::printInfo() {
    cout << "Name: " << getName() << endl
        << "Eye: " << getEye() << endl
        << "Color: " << getColor() << endl
        << "HairColor: " << getColor() << endl
        << "Age: " << getAge() << endl
        << "Education: " << getEducation() << endl;
}

MySelf::~MySelf()
{
}