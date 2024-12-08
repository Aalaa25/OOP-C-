#include <iostream>
using namespace std;

class Shape {
protected:
    int dim1;
    int dim2;

public:
    Shape(int _dim1 = 0, int _dim2 = 0) {
        dim1 = _dim1;
        dim2 = _dim2;
    }

    int getDim1() {
        return dim1;
    }

    int getDim2() {
        return dim2;
    }

    void setDim1(int _dim1) {
        dim1 = _dim1;
    }

    void setDim2(int _dim2) {
        dim2 = _dim2;
    }

    virtual float calcarea() = 0; // Pure virtual function
};

class Rectangle : public Shape {
public:
    Rectangle(int _dim1, int _dim2) : Shape(_dim1, _dim2) {}

    float calcarea() override {
        return dim1 * dim2;
    }
};

class Tringle : public Shape {
public:
    Tringle(int _dim1, int _dim2) : Shape(_dim1, _dim2) {}

    float calcarea() override {
        return 0.5 * dim1 * dim2;
    }
};

class Circle : public Shape {
public:
    Circle(int _dim1) : Shape(_dim1, 0) {}

    float calcarea() override {
        return 3.14 * dim1 * dim1;
    }
};

void printArea(Shape* s) {
    cout << s->calcarea() << endl; // Print the area
}

int main() {
    Rectangle r1(8, 9); // Declare rectangle object
    printArea(&r1);

    Tringle t1(4, 9); // Declare triangle object
    printArea(&t1);

    Circle c1(8); // Declare circle object
    printArea(&c1);

    return 0;
}
