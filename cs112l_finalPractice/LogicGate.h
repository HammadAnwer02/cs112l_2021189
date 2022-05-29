#pragma once
#include <iostream>

class LogicGate {
    private:
    std::string gateName;
    int out;
    char gate;

    public:
    LogicGate() {}
    LogicGate(std::string label) {gateName = label; out = -1;}
    std::string getGateName() const {return gateName;}
    virtual int compute() = 0;
    int getOutput() {
        out = compute();
        return out;
    }
    int getOval() const {
        return out;
    }
    char getGate() const {
        return gate;
    }
    void setGate(char g) {
        gate = g;
    }
};