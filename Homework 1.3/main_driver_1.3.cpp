#include <iostream>

using namespace std;
int sum;

int main() {
    for (int i=1; i < 11; i++ )
    {
        cout << i;
        if (i < 10)
            cout << " + ";
        sum +=i;
    }
    cout << " = ";
    cout << sum;
    return 0;
}