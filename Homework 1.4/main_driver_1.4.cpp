#include <iostream>

using namespace std;
int product = 1;
double sum;

int main() {
    for (int i=1; i < 11; i++ )
    {
        cout << i;
        if (i < 10)
            cout << " x ";
        product *=i;
    }
    cout << " = ";
    cout << product << endl;

    for (double d=1; d < 11; d++ )
    {
        cout << "1/";
        cout <<d;
        if (d < 10)
            cout << " + ";
        sum += 1/d;
    }
    cout << " = ";
    cout << sum;

    return 0;
}