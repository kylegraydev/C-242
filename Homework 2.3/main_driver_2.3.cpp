#include <iostream>
#include <cmath>

using namespace std;
int x, y;

int main() {
    cout << "Input first number" << endl;
    cin >> x;
    cout << "Input second number" << endl;
    cin >> y;
    cout << " Sum = " << x + y << endl;
    cout << " Difference = " << x - y << endl;
    cout << " Product = " << x * y << endl;
    cout << " Average = " << x + y / 2 << endl;
    cout << " Distance = " << abs(x-y) << endl;
    cout << " Maximum = ";
        if (x > y) cout << x;
          else if (y > x) cout << y;
             else cout << "they are the same value";
    cout << endl;
    cout << " Minimum = ";
    if (x > y) cout << y;
     else if (y > x) cout << x;
         else cout << "they are still the same value";
    return 0;
}