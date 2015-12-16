//
// Created by Kyle on 12/9/15.
//getBalance
//getAnnualInterestRate
//withdraw
//deposit
//getMonthlyInterest

#ifndef BANKACCOUNTS_CHECKINGACCOUNT_H
#define BANKACCOUNTS_CHECKINGACCOUNT_H

#include "Account.h"
class CheckingAccount:
        public Account {
public:
    CheckingAccount();
    ~CheckingAccount();

private:
    double balance;
    double overdraft_limit;



};


#endif //BANKACCOUNTS_CHECKINGACCOUNT_H
