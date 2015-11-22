#include <iostream>

using namespace std;
//accepting data by pointer
//void func1(int* pint){
//
//    if(pint != nullptr){
//        (*pint) = 2 * (*pint);
//    }
//
//}
//returning data by pointer
int* func2(int* pint){

    if(pint != nullptr){
        (*pint) = 2 * (*pint);
        return pint;
    }

}

int main() {
    int* p = new int(7);
//    func1(p);
    int* retVal = func2(p);
    return 0;
}