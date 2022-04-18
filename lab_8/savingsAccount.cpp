#include <iostream>

using namespace std;

#include "savingsAccount.h"

savingsAccount::savingsAccount(int aN, double b, double i, double d) : bankAccount(aN, b) {
    setInterest(i);
    bankAccount::deposit(d);
}



void savingsAccount::setInterest(double I) {
    if (I >= 0 && I <= 1) {
        interest = I;
    }
    else 
    {
        throw invalid_argument("Interest rate should be greater than 0 and less than equal to 1");
    }
}

double savingsAccount::getInterest() const {
    return interest;
}

void savingsAccount::postInterest() {
    bankAccount::deposit(getBalance() * interest);
}

void savingsAccount::withdraw(double b) {
    bankAccount::withdraw(b);
}

void savingsAccount::printAccountInfo() const {
    bankAccount::printInfo();
    cout << "The interest rate is: " << interest<< endl;
    cout << "The initial deposit is: " << deposit << endl;
}

savingsAccount::~savingsAccount() {
    
}
