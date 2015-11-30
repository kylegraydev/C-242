/* 3. Heap allocated arrays

Repeat the exercise above but perform all operations on the arrays using pointers and pointer arithmetic.
 The arrays should be declared using pointer types and allocated using the C++ operator new and de-allocated
 when ending the program using the C++ operator delete.

HINT – remember the difference between delete p and delete [] p. */
#include<iostream>
using namespace std;


class Stuff {
    int m_i;
//    char m_c;
public:
    void set_int (int i) {
        int m_i = i;
    }
//    int get_int() {
//        return m_i;
//    }
};

        int main()
        {



//            Stuff *p_stuff = new Stuff[100];
//            Stuff();
            arrayOfStuff Stuff[100];

            for(int i = 0; i < 10; i++) {

                Stuff.set_int(i);
//                cout <<  Stuff[i].get_int();

            }


            return 0;
        }
