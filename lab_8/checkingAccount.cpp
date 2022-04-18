#include <iostream>
#include <cmath>

#include "checkingAccount.h"
using namespace std;

checkingAccount::checkingAccount(int aN, double b, double I, double mB, double sC) : bankAccount(aN, b){
    setInterestRate(interest);
    setMinimumBalance(mB);
    setServiceCharges(sC);
}


void checkingAccount::setInterestRate(double I) {
    if (I >= 0 && I <= 1) {
        interest = I;
    }
    else 
    {
        throw invalid_argument("Interest rate should be greater than 0 and less than equal to 1");
    }
}

double checkingAccount::getInterestRate() const {
    return interest;
}

void checkingAccount::setMinimumBalance(double mB) {
    if (mB >= 0) 
    {
        minimumBalance = mB;
    }
    else
    {
        throw invalid_argument("Minimum balance should be positive");
    }
} 

double checkingAccount::getMinimumBalance() const {
    return minimumBalance;
}

void checkingAccount::setServiceCharges(double sC) {
    serviceCharges = abs(sC);
}
double checkingAccount::getServiceCharges() const {
    return serviceCharges;
}

void checkingAccount::postInterest() {
    deposit(getBalance() * interest);
}

bool checkingAccount::isBelowMinimum() const{
    if (getBalance() < minimumBalance) {
        return true;
    }
    else
    {
        return false;
    }
}

void checkingAccount::withdraw(double b) {
    if(!isBelowMinimum()) {
        bankAccount::withdraw(b);
    }
    else
    {
        bankAccount::withdraw(serviceCharges);
    }
}

void checkingAccount::printInfo() const {
    bankAccount::printInfo();
    cout << "Your interest rate is: " << interest << endl;
    cout << "Your minimum balance is: " << minimumBalance << endl;
    cout << "Your service charges is: " << serviceCharges << endl;
}

checkingAccount::~checkingAccount() {}

