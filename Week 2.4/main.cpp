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
    coffee_with_cream_and_sugar,
    tea,
    tea_w_cream,
    tea_w_cream_and_sugar,
    hot_chocolate,
    hot_chocolate_with_cream,
    hot_chocolate_w_cream_and_sugar
};

void drink(int delicious){
    switch(delicious) {
        case 1:
            cout << coffee << " Coffee";
            break;
        case 2:
            cout << beverages::coffee_with_cream << " Coffee w/cream";
            break;
        case 3:
            cout << beverages::coffee_with_cream_and_sugar << " Coffee w/cream & sugar";
            break;
        case 4:
            cout << beverages::tea << " Tea";
            break;
        case 5:
            cout << beverages::tea_w_cream << " Tea w crean";
            break;
        case 6:
            cout << beverages::tea_w_cream_and_sugar << " Tea w cream & sugar";
            break;
        case 7:
            cout << hot_chocolate << " Hot Chocolate";
            break;
        case 8:
            cout << hot_chocolate_with_cream << " Hot Chocolate w cream";
            break;
        case 9:
            cout << hot_chocolate_w_cream_and_sugar << " hot chocolate w cream and sugar";
            break;
    }
}

int main() {
int input;
    do {
        cout << "Select Drink 1 - 9 or 0 to exit" << endl;
        cin >> input;
        drink(input);
        cout << endl;
    } while (input != 0);
    return 0;

}