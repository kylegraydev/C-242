#include <iostream>


#include "Cliff.h"
#include "Dodo.h"


using namespace std;

int main()
{
    Cliff ChalkyWhiteOneAtDover;
    Dodo bertie;
    Dodo morris;
    Dodo grommet;
    Dodo willie;
    willie.jumpsOver( ChalkyWhiteOneAtDover );
    bertie.jumpsOver( ChalkyWhiteOneAtDover );

    return 0;
}