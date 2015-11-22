#include <iostream>

using namespace std;
long long num = 1;

int main() {
    for (int i=1; i<13; i++)
    {
        cout << num <<endl;
        num = num * 10;
    }
    return 0;
}

// you have to use floating point, as 'int' maxes out on it's bytes