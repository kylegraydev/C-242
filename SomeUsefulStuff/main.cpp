#include <iostream>
#include <string>

using namespace std;

int main() {

    int x[10]; // x is an array of ten integers
    std::string strarray[100]; //array of 100 strings

    unsigned i = 0;

    do {
        x[i] = i;
        i++;

    } while (i < 10);

    int zarray[1000];

    for (int z = 0; z < 1000; z++)  zarray[z] = z;

//multi-dimensional array
    int nice[10][10];
//    int IamReallyEvil[10][10][10][100];

    for (int row = 0; row<10; row++){
        for (unsigned col = 0; col < 10; col++){
            nice[row][col] = row + col;
        }
    }



    return 0;
}