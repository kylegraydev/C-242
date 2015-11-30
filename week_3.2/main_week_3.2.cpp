/*
 * Write a program that declares an array of 100 integers. Using a for loop populate the array with 100 integers where the nth’s position of the array contains an integer which is the number n.

HINT: Remember that arrays being with index 0 and your for loop has to start with 0 and end with size-1 as its last position.

Repeat the exercise but create an array that can hold a 100 chars and populate each position in the char array with any char of your choosing.

 

 

2. Vectors

Repeat the exercise in 1 above but use a vector container from the C++ standard template library.
 */

#include <iostream>
#include <vector>


using namespace std;

int main() {

    vector<int> myVector;

    for (int i =0; i < 100; i++){
        myVector.push_back(i);
        cout << myVector[i] << endl;
    }

    vector<char> myCharVector;
    for (int i =0; i < 100; i++){
        myCharVector.push_back('X');
        cout << myCharVector[i] << endl;
    }

    return 0;
}