#include <iostream>
#include <string>

using namespace std;
string user_input;
string user_name;

int main() {
    cout << "Hello, My name is Hal!" << endl;
    cout << "What would you like me to do?" << endl;
    getline(cin, user_input);
    cout << "I'm sorry, I cannot do that." << endl;
    return 0;
}