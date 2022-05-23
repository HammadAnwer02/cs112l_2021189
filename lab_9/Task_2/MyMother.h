
#pragma once

#include <iostream>


class MyMother
{
private:
    std::string name;
    std::string color;
    std::string hairColor;
    std::string eye;

public:
    MyMother(std::string = "", std::string = "", std::string = "", std::string = "");
    virtual void set() = 0;
    void setName(std::string);
    void setEye(std::string);
    void setColor(std::string);
    void setHairColor(std::string);
    std::string getName() const;
    std::string getEye() const;
    std::string getColor() const;
    std::string getHairColor() const;
    ~MyMother();
};



