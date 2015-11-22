/* 1. Arrays

Write a program that declares an array of 100 integers. Using a for loop populate the array with 100 integers where the nth’s position of the array contains an integer which is the number n.

HINT: Remember that arrays being with index 0 and your for loop has to start with 0 and end with size-1 as its last position.

Repeat the exercise but create an array that can hold a 100 chars and populate each position in the char array with any char of your choosing. */
#include <iostream>

using namespace std;

int main() {
    int arrayOfInts[100];
    for ( int i = 0; i < 100; i++ ){
        arrayOfInts[i] = i;
    }

    char int cArray[100];
    char X;
    for ( int i = 0; i < 100; i++ ){
        cArray[i] = X;
    }

    return 0;
}