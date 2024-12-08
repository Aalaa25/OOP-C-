#include <iostream>

using namespace std;

class point {
    int x;
    int y;

public:
    point() {
        x = y = 0;
        //cout << "\n point constructor";
    }
    point(int _x) {
        x = y = _x;
        //cout << "\n point constructor";
    }
    point(int _x, int _y) {
        x = _x;
        y = _y;
        //cout << "\n point constructor";
    }
    int getX() {
        return x;
    }
    int getY() {
        return y;
    }
    void setX(int _x) {
        x = _x;
    }
    void setY(int _y) {
        y = _y;
    }
    void print() {
        cout << "\n(" << x << "," << y << ")";
    }
    ~point() {
        //cout << "\n point destructor";
    }
};

class circle {
    point center;
    int radius;

public:
    circle() {
        radius = 0;
        //cout << "\n circle constructor";
    }

    circle(int x, int y, int r) : center(x, y), radius(r) {
        //cout << "\n circle constructor";
    }

    point getCenter() {
        return center;
    }

    int getRadius() {
        return radius;
    }

    void setCenter(point _center) {
        center = _center;
    }

    void setCenter(int x, int y) {
        center.setX(x);
        center.setY(y);
    }

    void setRadius(int r) {
        radius = r;
    }

    void print() {
        cout << "\n circle center: ";
        center.print();
        cout << ",\n radius: " << radius;
    }

    ~circle() {
        //cout << "\n circle destructor";
    }
};

int main() {
    point p1(5, 7);
    p1.print();
    cout << endl;

    circle c1;
    c1.setCenter(10, 20);
    c1.setRadius(15);
    c1.print();
    cout << endl;

    circle c2(3, 4, 10);
    c2.print();

    return 0;
}
