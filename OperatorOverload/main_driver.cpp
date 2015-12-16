#include <iostream>
#include "Fraction.h"
using namespace std;

int main(int argc, char* argv[])
{
#if 0
	cout << "The value of argc is " << argc << endl;
	for (size_t i = 0; i < argc; i++)
	{
		cout << "The value of argv[" <<
			i << "] is " << argv[i] << endl;
	}
#endif
	Fraction f1(3,4);
	Fraction f2(1, 2);

	Fraction sum = f1 + f2;
	Fraction diff = f1 - f2;
	
	cout << f1 << endl;
	cout << sum << endl;
    cout << diff << endl;

	return 0;
}