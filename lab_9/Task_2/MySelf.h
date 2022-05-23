#pragma once

#include <iostream>
#include "MyFather.h"



class MySelf : public MyFather
{

    
public:
  std::string education;
    int age;
    MySelf(std::string = "", std::string = "", std::string = "", std::string = "", int = 0, std::string = "");
    void set();
    void setAge(int);
    void setEducation(std::string);
    int getAge() const;
    std::string getEducation() const;
    void printInfo();
    ~MySelf();
};
