/* 3. Write a program that computes loan repayments

for a loan based on simple interest and
for a loan  based on compound interest.
(You must use the * / + - operators)

Extend the program in (b) to print out the monthly repayment schedule and remaining balance

HINT: Use the ++ and – and += and -= operators. */

#include <iostream>
#include <math.h>

using namespace std;

//function for determining simple interest

int simpleInterest(double b, double r, double d){
    r /= 100;

    double balance = b * ( 1 + r * d);

    cout << "You will have paid " << balance << " by the end of the loan" << endl;
}

//function for determining compound interest

int compoundInterest(double account, double rate, double years){

    rate /= 100;

    double balance = account * pow((1 + (rate /12)) , (12 * years));

    cout << "You will have paid " << balance << " by the end of the loan" << endl;

}

int main() {

    double balance;
    double interest;
    double duration;

//get inputs of balance, interest rate, and duration

    cout << "Input initial balance: $";
    cin >> balance;
    cout << endl << "Input interest rate: ";
    cin >> interest;
    cout << endl << "Input duration in years: ";
    cin >> duration;

//call simpleInterest

    simpleInterest(balance, interest, duration);


//call compoundInterest

    compoundInterest(balance, interest, duration);

    return 0;
}