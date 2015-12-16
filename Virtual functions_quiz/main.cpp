#include <iostream>

using namespace std;



    class Parent {
    public:
        virtual void f(){
            cout << "Invoked f from Parent" << endl;
        }
    };

    class Child: public Parent {
    public:
        virtual void f(){
            cout << "Invoked f from Child" << endl;
        }
        void f(unsigned u ){
            cout << "Invoked f(unsigned) from Child" << u << endl;
        }
    };

    void gFunc(Parent a){
        a.f();
    }

    int main(int argc, char* argv[]){
        Parent a;
        a.f();
        gFunc(a);

        Child b;
        b.f(4);
        gFunc(b);
    return 0;
}