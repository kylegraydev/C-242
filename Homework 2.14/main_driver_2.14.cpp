#include <iostream>
#include <string>

using namespace std;
string barbed_wire = "+--+--+--+";
string comb = "|  |  |  |";

int main() {
    for (int i = 0; i < 3; i++)
    {
        cout << barbed_wire << endl;
        cout << comb << endl;
    }
    cout << barbed_wire << endl;
    return 0;
}