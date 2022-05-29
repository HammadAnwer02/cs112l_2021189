#pragma once
#include "LogicGate.h"


using std::cout;
using std::cin;
using std::endl;

/*
class BinaryGate(LogicGate):

    def __init__(self,n):
        LogicGate.__init__(self,n)

        self.pinA = None
        self.pinB = None

    def getPinA(self):
        return int(input("Enter Pin A input for gate "+ self.getLabel()+"-->"))

    def getPinB(self):
        return int(input("Enter Pin B input for gate "+ self.getLabel()+"-->"))
*/
class BinaryGate : public LogicGate {
private:
    int inputOne;
    int inputTwo;
public:
    // virtual void setInputOne(int ione) { inputOne = ione;}
    // virtual void setInputTwo(int itwo)  {inputTwo  = itwo;}
    BinaryGate() {
        inputOne = -1;
        inputTwo = -1;
    }
    BinaryGate(std::string val) : LogicGate(val) {
        inputOne = -1;
        inputTwo = -1;
    }
    virtual void setInputOne() {
        std::cout << "Enter the first input for the gate: ";
        std::cin >> inputOne;
    }
    virtual void setIone(int val1) {
        inputOne = val1;
    }
    virtual void setItwo(int val2) {
        inputTwo = val2;
    }
    virtual void setInputTwo() {
        std::cout << "Enter the second input for the gate: ";
        std::cin >> inputTwo;
    }
    int getInputOne() const {
        return inputOne;
    }
    int getInputTwo() const {
        return inputTwo;
    }
};
