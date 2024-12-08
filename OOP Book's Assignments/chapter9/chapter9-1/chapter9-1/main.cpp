//
//  main.cpp
//  chapter9-1
//
//  Created by Aalaa Seif .
//
#include <iostream>
#include <string>
using namespace std;

class Media {
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

class Book : private Media {
private:
    int pages;
public:
    void input() {
        Media::input();
        cout << "Enter pages: ";
        cin >> pages;
    }
    void display() const {
        Media::display();
        cout << "\nPages: " << pages;
    }
};

class Audio : private Media {
private:
    float duration;
public:
    void input() {
        Media::input();
        cout << "Enter duration: ";
        cin >> duration;
    }
    void display() const {
        Media::display();
        cout << "\nDuration: " << duration;
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


