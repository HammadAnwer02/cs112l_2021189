#pragma once

#include <iostream>
#include "MyFather.h"
#include "MyMother.h"


class MySister: public MyFather, MyMother
{
public:
    std::string education;
    int age;
    MySister(std::string = "", std::string = "", std::string = "", std::string = "", int = 0, std::string = "");
    void set();
    void setAge(int);
    void setEducation(std::string);
    int getAge() const;
    std::string getEducation() const;
    void printInfo();
    ~MySister();
};


