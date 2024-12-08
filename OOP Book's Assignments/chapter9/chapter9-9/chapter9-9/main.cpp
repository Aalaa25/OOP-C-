//
//  main.cpp
//  chapter9-9
//
//  Created by Aalaa Seif.
//
#include <iostream>
#include <string>
using namespace std;

class Publication2 {
protected:
    string title;
    float price;
    int day, month, year;
public:
    void getdata() {
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter publication date (day month year): ";
        cin >> day >> month >> year;
    }
    void putdata() const {
        cout << "Title: " << title << "\nPrice: " << price;
        cout << "\nDate: " << day << "/" << month << "/" << year << endl;
    }
};

class Book2 : public Publication2 {
private:
    int pages;
public:
    void getdata() {
        Publication2::getdata();
        cout << "Enter number of pages: ";
        cin >> pages;
    }
    void putdata() const {
        Publication2::putdata();
        cout << "Pages: " << pages << endl;
    }
};

class Tape2 : public Publication2 {
private:
    float playingTime;
public:
    void getdata() {
        Publication2::getdata();
        cout << "Enter playing time: ";
        cin >> playingTime;
    }
    void putdata() const {
        Publication2::putdata();
        cout << "Playing Time: " << playingTime << " minutes" << endl;
    }
};

int main() {
    Book2 book;
    Tape2 tape;

    book.getdata();
    tape.getdata();

    cout << "Book details:\n";
    book.putdata();

    cout << "Tape details:\n";
    tape.putdata();

    return 0;
}
