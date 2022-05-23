#pragma once

#include <iostream>



class MyFather
{
private:
    std::string name;
    std::string eye;
    std::string color;
    std::string hairColor;

public:

    MyFather(std::string = "", std::string = "", std::string = "", std::string = "");
    virtual void set() = 0;
    void setName(std::string);
    void setEye(std::string);
    void setColor(std::string);
    void setHairColor(std::string);
    std::string getName() const;
    std::string getEye() const;
    std::string getColor() const;
    std::string getHairColor() const;
    virtual void printInfo() = 0;
    ~MyFather();
};
