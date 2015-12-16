/*Create a class definition for an object called Account. Add a constructor and destructor to it.
Create a class CheckingAccount and make it a child class of Account.
Create a second class named Savings account and also make this class a derived class of Account.
Create private data members on the derived classes to represent balance and overdraft limits.
Implement the following class methods on classes that you think are the appropriate ones.

getBalance
getAnnualInterestRate
withdraw
deposit
getMonthlyInterest

Write a main function that instantiates a checking and savings account, and then deposit $100 into each account and set an overdraft limit on each account of $50.*/

#include <iostream>
#include "include.h"

using namespace std;

int main() {

    CheckingAccount();
    Savings();

    string name;

    cout << "Enter your name: ";
    cin >> name;

    CheckingAccount checking;
    Savings savings;

    return 0;
}