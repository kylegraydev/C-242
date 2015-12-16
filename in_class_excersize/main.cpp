#include <iostream>
#include "Fraction.h"

using namespace std;


int main( int argc, char* argv[]) {

#if 0

    cout << " the value of argc is: " << argc;

    for( size_t i = 0; i < argc; i++ ) {2
        cout << endl << "The value of argv: " << argv[i];
    }

#endif


    Fraction f1( 3 , 4 );

    cout << f1;


    return 0;
}