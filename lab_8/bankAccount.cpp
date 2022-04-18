#include <iostream>
#include "bankAccount.h"



using namespace std;




bankAccount::bankAccount(int aN, double n) {
    setAccountNumber(aN);
    deposit(n);
}

void bankAccount::setAccountNumber(int aN) {
    accountNum = aN;
}

int bankAccount::getAccountNumber() const {
    return accountNum;
}

void bankAccount::deposit(double b){
    if (b > 0) {
    balance += b;
    }
    else
    {
        throw invalid_argument("deposited amount should be greater than 0");
    }
}

double bankAccount::getBalance() const {
    return balance;
}

void bankAccount::withdraw(double b) {
    // if (b <= balance) {
    balance -= b;
    // }
    // else 
    // {
    //     throw invalid_argument("You don't have enough balance to withdraw");
    // }
}

void bankAccount::printInfo() const {
    cout << "Your account number is: " << accountNum << endl;
    cout << "Your balance is: " << balance << endl;
}

bankAccount::~bankAccount() {
    
}
    // void setAccountNumber(int);
    // int getAccountNumber() const;
    // void deposit(double);
    // double getBalance() const;
    // void withdraw(double);
    // void printInfo() const;
    // ~bankAccount();