//
//  main.cpp
//  chapter6-10
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
void inputAngle() {
cin >> degrees >> minutes >> direction;
 }
void showAngle() const {
 cout << degrees << "\u00B0" << minutes << "'" << direction;
}
};

class Vessel {
private:
    static int shipCount;
    int serial;
    Angle latitude, longitude;
public:
    Vessel() {
        serial = ++shipCount;
    }
    void inputLocation() {
        latitude.inputAngle();
        longitude.inputAngle();
    }
    void showLocation() const {
        cout << "Ship " << serial << ": ";
        latitude.showAngle();
        cout << ", ";
        longitude.showAngle();
        cout << endl;
    }
};

int Vessel::shipCount = 0;

int main() {
    Vessel v1, v2, v3;
    v1.inputLocation();
    v2.inputLocation();
    v3.inputLocation();
    v1.showLocation();
    v2.showLocation();
    v3.showLocation();
    return 0;
}
