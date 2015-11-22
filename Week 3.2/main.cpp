#include <iostream>
#include <vector>

using namespace std;




int main() {


    vector <char> Foo(100);
    for(char c = 'a'; c = 'z' + 1; c++)
        Foo.push_back(c);


    return 0;
}