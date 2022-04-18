#include <iostream>

#include "bankAccount.h"


#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H


class savingsAccount : public bankAccount
{
private:
    double interest;
    double deposit;
public:
    savingsAccount(int, double, double = 0, double = 0);
    void setInterest(double);
    double getInterest() const;
    void postInterest();
    void withdraw(double);
    void printAccountInfo() const;
    ~savingsAccount();
};

#endif