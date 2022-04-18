#include <iostream>



#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

class bankAccount
{
private:
    int accountNum;
    double balance;
public:
    bankAccount(int = 0, double = 0);
    void setAccountNumber(int);
    int getAccountNumber() const;
    void deposit(double);
    double getBalance() const;
    void withdraw(double);
    void printInfo() const;
    ~bankAccount();
};

#endif