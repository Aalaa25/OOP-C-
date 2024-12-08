//
//  main.cpp
//  chapter9-5
//
//  Created by Aalaa Seif .
//
#include <iostream>
#include <string>
using namespace std;

class Rectangle {
protected:
    float length;
    float width;
public:
    void input() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }
    void display() const {
        cout << "Length: " << length << "\nWidth: " << width;
        cout << "\nArea: " << length * width;
        cout << "\nPerimeter: " << 2 * (length + width);
    }
};

class Box : private Rectangle {
private:
    float height;
public:
    void input() {
        Rectangle::input();
        cout << "Enter height: ";
        cin >> height;
    }
    void display() const {
        Rectangle::display();
        cout << "\nHeight: " << height;
        cout << "\nVolume: " << length * width * height;
    }
};

int main() {
    Box box;
    box.input();
    box.display();
    cout << endl;
    return 0;
}
