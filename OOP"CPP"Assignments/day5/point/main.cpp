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

class rect {
    point *ul;
    point *lr;
public:
    rect() {
        ul = new point();
        lr = new point();
        //cout << "\n rect constructor";
    }

    point getul() {
        return *ul;
    }

    point getlr() {
        return *lr;
    }

    void setul(point _ul) {
        *ul = _ul;
    }

    void setul(int x, int y) {
        ul->setX(x);
        ul->setY(y);
    }

    void setlr(point _lr) {
        *lr = _lr;
    }

    void setlr(int x, int y) {
        lr->setX(x);
        lr->setY(y);
    }

    ~rect() {
        delete ul;
        delete lr;
        //cout << "\n rect destructor";
    }
};

int main() {
    point p1(5);
    p1.print();
    point p2(5, 7);
    p2.print();
    cout << endl;

    rect r1;
    r1.setul(10, 20);
    r1.setlr(5, 9);
    r1.getul().print();
    r1.getlr().print();

    return 0;
}
