#pragma once
#include "LogicGate.h"

class UnaryGate : public LogicGate {
    private:
    int input = -1;
    public:
    virtual void setInput() {
        std::cout << "Enter the input for the gate: ";
        std::cin >> input;
    }
    void setIn (int val) {
        input = val;
    }
    UnaryGate() {}
    UnaryGate(std::string val) : LogicGate(val) {}
    int getInput() const {return input;}
};