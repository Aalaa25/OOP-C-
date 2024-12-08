//
//  main.cpp
//  chapter9-3
//
//  Created by Aalaa Seif .
//
#include <iostream>
#include <string>
using namespace std;

class Item {
private:
    string title;
    float price;
public:
    void input() {
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter price: ";
        cin >> price;
    }
    void display() const {
        cout << "Title: " << title << "\nPrice: " << price;
    }
};

class Sales {
private:
    float sales[3];
public:
    void input() {
        for (int i = 0; i < 3; i++) {
            cout << "Enter sales for month " << i + 1 << ": ";
            cin >> sales[i];
        }
    }
    void display() {
        for (int i = 0; i < 3; i++) {
            cout << "\nMonth " << i + 1 << " Sales: " << sales[i];
        }
    }
};

class Book : private Item, private Sales {
private:
    int pages;
public:
    void input() {
        Item::input();
        cout << "Enter pages: ";
        cin >> pages;
        Sales::input();
    }
    void display() {
        Item::display();
        cout << "\nPages: " << pages;
        Sales::display();
    }
};

class Audio : private Item, private Sales {
private:
    float duration;
public:
    void input() {
        Item::input();
        cout << "Enter duration: ";
        cin >> duration;
        Sales::input();
    }
    void display() {
        Item::display();
        cout << "\nDuration: " << duration;
        Sales::display();
    }
};

int main() {
    Book book;
    Audio audio;
    book.input();
    audio.input();
    book.display();
    cout << endl;
    audio.display();
    cout << endl;
    return 0;
}
