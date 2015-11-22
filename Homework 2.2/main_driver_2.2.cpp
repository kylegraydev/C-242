#include <iostream>
#include <cmath>

using namespace std;


int doMath(){
    for (int i = 1; i < 6; i++)
    {
        for (int p = 2; p < 5; p++)
        {
            cout << i << " ^ " << p << " = " << pow( i , p ) << endl;
        }
    }

}

int main() {
    doMath();
    return 0;
}



