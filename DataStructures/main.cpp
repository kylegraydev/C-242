#include <iostream>
#include <list>

using namespace std;

int main() {

    list<int> intList;

    for (int x=0; x < 1000; x++){
        intList.push_back(x);
    }

    list<int>::iterator pos;

    pos = intList.begin();

    for (list<int>::iterator itp = intList.begin(); itp != intList.end(); itp++) {
                intList.insert(pos, 78600);
        cout << *itp << endl;
    }



    return 0;
}