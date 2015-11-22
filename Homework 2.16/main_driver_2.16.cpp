#include <iostream>

using namespace std;
int time1, time2, minutes, hours;

void getTime(int time1 , int time2){
    int timeElapsed = time2 - time1;
    int minutes = timeElapsed % 100;
    int hours = timeElapsed / 100;

    if (time2 > time1 && minutes > 60) minutes -=40;

    if (time1 > time2) {
        hours += 24;
        minutes = abs(minutes);
    }
    cout << hours << " Hours" << minutes << " Minutes";
}

int main() {
    cout << "Enter Military time #1";
    cin >> time1;
    cout << "Enter Military time #2";
    cin >> time2;
    getTime(time1, time2);

    return 0;
}

