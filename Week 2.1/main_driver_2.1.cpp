/*1. Write a program that computes geometry numbers as follows

(a) After asking the user for a value of a radius the program should compute the area of a circle with that radius.

(b) Modify the program in (a) above to also compute the volume of a sphere with that radius.

HINT: Use the multiplication * and power operator pow() to raise a number to a power*/

#include <iostream>
#include <math.h>

using namespace std;
double radius, area, volume;

int main() {
    cout << "Input radius of circle on meters" << endl;
    cin >> radius;
    area = M_PI * pow(radius , 2);
    volume = (4/3) * M_PI * radius;
    cout << "Area = " << area << " meters squared" << endl;
    cout << "Volume = " << volume << " meters cubed" << endl;
    return 0;
}