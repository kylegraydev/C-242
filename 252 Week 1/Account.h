//
// Created by Kyle on 11/30/15.
//

#ifndef INC_252_WEEK_1_ACCOUNT_H
#define INC_252_WEEK_1_ACCOUNT_H


class Account {

    string FName;
    string LName;

    virtual double getbalance() = 0;
    virtual void withdraw ( const double& amt ) = 0;
    virtual void deposit (const double& amt) = 0;



};


#endif //INC_252_WEEK_1_ACCOUNT_H
