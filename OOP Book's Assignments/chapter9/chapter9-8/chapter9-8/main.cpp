//
//  main.cpp
//  chapter9-8
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
    void display() const {
        cout << str;
    }
};

class EnhancedString : public SimpleString {
public:
    EnhancedString(const char* s) : SimpleString(s) {}

    EnhancedString left(int n) const {
        EnhancedString temp("");
        strncpy(temp.str, str, n);
        temp.str[n] = '\0';
        return temp;
    }

    EnhancedString mid(int start, int n) const {
        EnhancedString temp("");
        strncpy(temp.str, str + start, n);
        temp.str[n] = '\0';
        return temp;
    }

    EnhancedString right(int n) const {
        EnhancedString temp("");
        int len = strlen(str);
        if (n > len) n = len;
        strncpy(temp.str, str + len - n, n);
        temp.str[n] = '\0';
        return temp;
    }
};

int main() {
    EnhancedString s1("Hello, World  world");
    EnhancedString leftPart = s1.left(5);
    EnhancedString midPart = s1.mid(7, 5);
    EnhancedString rightPart = s1.right(6);

    cout << "Original: "; s1.display(); cout << endl;
    cout << "Left: "; leftPart.display(); cout << endl;
    cout << "Mid: "; midPart.display(); cout << endl;
    cout << "Right: "; rightPart.display(); cout << endl;

    return 0;
}
