//
//  main.cpp
//  chapter9-2
//
//  Created by Aalaa Seif .
//
#include <iostream>
#include <cstring>
using namespace std;

class SimpleString {
protected:
    static const int SIZE = 80;
    char str[SIZE];
public:
    SimpleString() {
        str[0] = '\0';
    }
    SimpleString(const char* s) {
        strncpy(str, s, SIZE - 1);
        str[SIZE - 1] = '\0';
    }
    void show() const {
        cout << str;
    }
};

class SafeString : public SimpleString {
public:
    SafeString(const char* s) {
        if (strlen(s) >= SIZE) {
            strncpy(str, s, SIZE - 1);
            str[SIZE - 1] = '\0';
        } else {
            strcpy(str, s);
        }
    }
};

int main() {
    SafeString s1 = "This string exceeds the size limit and will be truncated.";
    SafeString s2 = "Short string.";
    cout << "String 1: ";
    s1.show();
    cout << "\nString 2: ";
    s2.show();
    cout << endl;
    return 0;
}

