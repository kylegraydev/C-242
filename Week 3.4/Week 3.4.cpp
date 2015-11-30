/*4. General Array knowledge

(a) Create a 4x4 array A of doubles. Using a for loop populate each of the 16 positions in the
 array with a random double. Using second for loop print out the number in each position using the form:



                      A(0,1) = 3.4

                            A(1,2)  = 5.6



(b) Create a char array of size 10, and fill it the string ‘Washington’.

(c) Create a std::string C++ string using the char array created in (c) above. Write a program and print both
 the char array and the C++ string.

(d) Create a pointer that points to an array of C style strings (char arrays), allocate this pointer and
 populate the first 4 char arrays with the names Mathew, Mark, Luke and John.

(e) Create a char array of size 6 chars and initialize it with the chars ‘H’, ‘e’, ‘l’, ‘l’, ‘o’ and ‘\0’ (the null terminator).
 *
 *
 *
 */

#include <iostream>
#include <random>
#include <string>

using namespace std;

int main() {


    // PART A

    int aHeight = 4;
    int aWidth = 4;
    double **p_Array;

    p_Array = new double*[aHeight];


    std::uniform_real_distribution<double> dist(-100.000, 100.000);  //(min, max)


    std::mt19937 rng;

    rng.seed(std::random_device{}());

    cout << "PART A: " << endl;

    for ( int i = 0; i < aHeight; ++i )
        p_Array[i] = new double[aWidth];

    for ( int h = 0; h < aHeight ; ++h ) {
        for ( int w = 0; w < aWidth; ++w ) {
            p_Array[h][w] = dist(rng);
            cout << "A(" << h << "," << w << ") = " << p_Array[h][w] << endl;
        }
    }


    for (int i = 0; i < aHeight; ++i)
        delete [] p_Array[i];
    delete [] p_Array;


    //PART B & C


    char a[11];

    a[0] = 'W'; a[1] = 'a'; a[2] = 's'; a[3] = 'h'; a[4] = 'i'; a[5] = 'n'; a[6] = 'g'; a[7] = 't'; a[8] = 'o'; a[9] = 'n'; a[10] = NULL;

    cout << endl << "Part B & C: " << endl;
    cout << a << endl;

    string str(a);
    cout << str;


    return 0;
}