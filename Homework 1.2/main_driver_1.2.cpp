#include <iostream>
#include <string>

using namespace std;
string user_name;

int main() {
    cout << "Hello, My name is Hal!" << endl;
    cout << "What is your name?" << endl;
    getline(cin, user_name);
    cout << "Hello, ";
    cout << user_name;
    cout << ". nice to meet you!"<< endl;
    return 0;
}