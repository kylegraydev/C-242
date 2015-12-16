//
// Created by Kyle on 12/9/15.
//

#ifndef BANKACCOUNTS_SAVINGS_H
#define BANKACCOUNTS_SAVINGS_H

#include "Account.h"
class Savings:
        public Account {
public:
    Savings();
    ~Savings();
private:
    double balance;
    double overdraft_limit;
};


#endif //BANKACCOUNTS_SAVINGS_H
