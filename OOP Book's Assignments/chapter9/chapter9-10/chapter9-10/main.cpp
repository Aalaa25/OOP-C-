//
//  main.cpp
//  chapter9-10
//
//  Created by Aalaa Seif.
//
#include <iostream>
#include <string>
using namespace std;

class Publication3 {
protected:
    string title;
    float price;
public:
    void getdata() {
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter price: ";
        cin >> price;
    }
    void putdata() {
        cout << "Title: " << title << "\nPrice: " << price << endl;
    }
};

class Sales {
protected:
    static const int MONTHS = 3;
    float sales[MONTHS];
public:
    void getdata() {
        cout << "Enter sales for " << MONTHS << " months:\n";
        for (int i = 0; i < MONTHS; i++) {
            cout << "Month " << i + 1 << ": ";
            cin >> sales[i];
        }
    }
    void putdata() {
        cout << "Sales for " << MONTHS << " months:\n";
        for (int i = 0; i < MONTHS; i++) {
            cout << "Month " << i + 1 << ": " << sales[i] << endl;
        }
    }
};

class Book3 : public Publication3, public Sales {
private:
    int pages;
public:
    void getdata() {
        Publication3::getdata();
        cout << "Enter number of pages: ";
        cin >> pages;
        Sales::getdata();
    }
    void putdata() {
        Publication3::putdata();
        cout << "Pages: " << pages << endl;
        Sales::putdata();
    }
};

class Tape3 : public Publication3, public Sales {
private:
    float playingTime;
public:
    void getdata() {
        Publication3::getdata();
        cout << "Enter playing time: ";
        cin >> playingTime;
        Sales::getdata();
    }
    void putdata() {
        Publication3::putdata();
        cout << "Playing Time: " << playingTime << " minutes" << endl;
        Sales::putdata();
    }
};

int main() {
    Book3 book;
    Tape3 tape;

    book.getdata();
    tape.getdata();

    cout << "\nBook details:\n";
    book.putdata();

    cout << "\nTape details:\n";
    tape.putdata();

    return 0;
}
