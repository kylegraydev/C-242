/*2. Write a program that declares an array of 100 integers.
 * Using a for loop populate the array with 100 integers where the nth
 * element’s position of the array contains an integer which is the number n.
 * Repeat the exercise above but create an array that can hold a 100 chars and
 * populate each position in the char array with any char of your random choosing.
 * You may use the rand function to generate the random numbers.
 *
Repeat the exercise above but perform all operations on the arrays using pointers
 and pointer arithmetic. The arrays should be declared using pointer types and
 allocated on the heap using the C++ operator new and de-allocated when ending the program using the C++ operator delete[].
HINT: Remember that arrays being with index 0 and your for loop has to start with 0 and end with size-1 as its last position.
HINT – remember the difference between delete p and delete [] p.
 */



#include <iostream>

#include <array>

    using namespace std;

    int main() {

        array<int,100> myArray;

        for ( int i = 0; i < myArray.size() - 1; i++)
            myArray[i] = i;

        array<char,100> myCharArray;

        for ( int i = 0; i < myCharArray.size() - 1; i++)
            myCharArray[i] = 'X';

     ///////////////////////////////////////////////////////////////////////



        int * pointer;
        pointer = new int[100];

        for ( int w = 0; w < 100 ; ++w ) {
                pointer[w] = w;
            }

        delete [] pointer;

        char * c_pointer;
        c_pointer = new char[100];

        for ( int w = 0; w < 100 ; ++w ) {
            c_pointer[w] = 'X';
        }

        delete [] c_pointer;





        return 0;
}