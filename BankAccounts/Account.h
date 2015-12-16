//
// Created by Kyle on 12/9/15.
//
//getBalance
//getAnnualInterestRate
//withdraw
//deposit
//getMonthlyInterest

#ifndef BANKACCOUNTS_ACCOUNT_H
#define BANKACCOUNTS_ACCOUNT_H


class Account {
public:
    Account();
    ~Account();

    double getBalance(){
        return balance;
    }

    int getAnnualInterestRate(){
        return interest;
    }
    double withdraw();
    void deposit();
    int getMonthlyInterest();

};


#endif //BANKACCOUNTS_ACCOUNT_H
