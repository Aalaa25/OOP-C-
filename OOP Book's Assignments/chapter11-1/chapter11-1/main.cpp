//
//  main.cpp
//  chapter11-1
//
//  Created by Aalaa Seif .
//
#include <iostream>
#include <string>
using namespace std;

class Item
{
private:
    string name;
    float cost;
public:
    void getdata()
    {
        cout << "Enter name: "; cin >> name;
        cout << "Enter cost: "; cin >> cost;
    }
    void putdata()
    {
        cout << "Name: " << name << "\nCost: " << cost;
    }
};

class Novel : public Item
{
private:
    int chapters;
public:
    void getdata()
    {
        Item::getdata();
        cout << "Enter number of chapters: "; cin >> chapters;
    }
    void putdata()
    {
        Item::putdata();
        cout << "\nChapters: " << chapters;
    }
};

class Music : public Item
{
private:
    float duration;
public:
    void getdata()
    {
        Item::getdata();
        cout << "Enter duration: "; cin >> duration;
    }
    void putdata()
    {
        Item::putdata();
        cout << "\nDuration: " << duration;
    }
};

int main()
{
    Item* items[100];
    int n = 0;
    char choice;
    do {
        cout << "Enter data for novel or music (n/m)? ";
        cin >> choice;
        if(choice == 'n')
            items[n] = new Novel;
        else
            items[n] = new Music;
        items[n++]->getdata();
        cout << "Enter another (y/n)? ";
        cin >> choice;
    }
    while(choice == 'y');
    for(int j = 0; j < n; j++)
        items[j]->putdata();
    cout << endl;
    return 0;
}
