#include <iostream>

#include "bankAccount.h"

#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H
class checkingAccount : public bankAccount
{
private:
   double interest;
   double minimumBalance;
   double serviceCharges;
public:
    checkingAccount(int, double, double = 0, double = 0, double = 0);
    void setInterestRate(double);
    double getInterestRate() const;
    void setMinimumBalance(double);
    double getMinimumBalance() const;
    void setServiceCharges(double);
    double getServiceCharges() const;
    void postInterest();
    bool isBelowMinimum() const;
    void withdraw(double);
    void printInfo() const;
    ~checkingAccount();
};

#endif