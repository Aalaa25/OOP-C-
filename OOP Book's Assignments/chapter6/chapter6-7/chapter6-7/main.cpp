//
//  main.cpp
//  chapter6-7
//
//
#include <iostream>
using namespace std;

class Angle {
private:
    int degrees;
    float minutes;
    char direction;
public:
    Angle(int d, float m, char dir) {
        degrees = d;
        minutes = m;
        direction = dir;
    }

    void inputAngle() {
        cin >> degrees >> minutes >> direction;
    }

    void showAngle() {
        cout << degrees << "\u00B0" << minutes << "'" << direction;
    }
};

int main() {
    Angle a1(149, 34.8, 'W');
    a1.showAngle();
    cout << endl;
    Angle a2(0, 0.0, 'N');
    a2.inputAngle();
    a2.showAngle();
    cout << endl;
    return 0;
}

