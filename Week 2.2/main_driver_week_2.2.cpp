#include <iostream>

using namespace std;
int num;

int main() {
    cout << "Pick a number, any number" << endl;
    cin >> num;
    if (num <100) cout << "The number " << num << " is less than 100";
    else cout << "The number " << num << " is greater than or equal to 100";

    return 0;
}