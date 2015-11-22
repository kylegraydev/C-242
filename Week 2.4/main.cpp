/*4. Write a program that numbers
 * beverages coffee,
 * coffee with cream,
 * coffee with cream and sugar
 * as beverages from 1 to 3,
 * additionally
 * add tea with the same options
 * as well as Hot Chocolate.

Allow the user to input a number and printout what drink selection the user made

Ask the user to make another selection, or exit by entering a special character

HINT: use data type enum, operators cin, cout, and program control structures do-while, or while and the switch statement. */

#include <iostream>

using namespace std;

enum beverages {
    coffee = 1,
    coffee_with_cream ,
    coffee_with_cream_and_sugar
};

int main() {
int input;
    cout << "Select Drink" << endl;
    cin >> input;

    switch(input) {
        case 1:
            cout << beverages::coffee;
            break;
        case 2:
            cout << beverages::coffee_with_cream;
            break;
        case 3:
            cout << beverages::coffee_with_cream_and_sugar;
            break;
    }


    return 0;
}