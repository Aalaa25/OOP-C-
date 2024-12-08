#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
    char* arr;
    int size;

public:
    String() {
        size = 10;
        arr = new char[size];
        arr[0] = '\0';
    }

    String(int s) {
        size = s;
        arr = new char[size];
        arr[0] = '\0';
    }

    String(const char* str) {
        size = strlen(str) + 10;
        arr = new char[size];
        strcpy(arr, str);
    }

    String(const String& s) {
        size = s.size;
        arr = new char[size];
        strcpy(arr, s.arr);
    }

    ~String() {
        delete[] arr;
    }

    String& operator=(const String& s) {
        if (this == &s) {
            return *this;
        }

        delete[] arr;
        size = s.size;
        arr = new char[size];
        strcpy(arr, s.arr);

        return *this;
    }

    String operator+(const String& s) {
        int newSize = size + s.size - 1;
        char* newArr = new char[newSize];

        strcpy(newArr, arr);
        strcat(newArr, s.arr);

        String newString;
        newString.size = newSize;
        newString.arr = newArr;

        return newString;
    }

    char* getString() {
        return arr;
    }

    void setString(char* str) {
        int len = strlen(str);
        if (len + 1 <= size) {
            strcpy(arr, str);
        } else {
            delete[] arr;
            size = len + 1;
            arr = new char[size];
            strcpy(arr, str);
        }
    }
};

int main() {
    String s1;
    cout << s1.getString();

    String s2(30);
    cout << s2.getString();

    String s3("ahmed");
    cout << s3.getString() << endl;

    s1.setString("alaa khaled");
    cout << s1.getString() << endl;

    String s4 = s1;
    cout << s4.getString() << endl;

    String s5;
    s5 = s3;
    cout << s5.getString() << endl;

    String s6 = s3 + s5;
    cout << s6.getString() << endl;

    return 0;
}
