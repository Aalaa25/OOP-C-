//
//  main.cpp
//  chapter6-3
//
//
#include <iostream>
using namespace std;

class Timer {
private:
    int hours, minutes, seconds;
public:
    Timer() {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }

    Timer(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    void show() {
        cout << hours << ":" << minutes << ":" << seconds;
    }
    void add(Timer t1, Timer t2) {
        seconds = t1.seconds + t2.seconds;
        if (seconds > 59) {
            seconds -= 60;
            minutes++;
        }
        minutes += t1.minutes + t2.minutes;
        if (minutes > 59) {
            minutes -= 60;
            hours++;
        }
        hours += t1.hours + t2.hours;
    }
};
int main() {
    const Timer t1(5, 59, 59);
    const Timer t2(4, 30, 30);
    Timer t3;
    t3.add(t1, t2);
    cout << "Sum = ";
    t3.show();
    cout << endl;
return 0;
}
