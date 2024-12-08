#include <iostream>

using namespace std;

class Stack{
 int arr[5];
 int size;
 int tos;
 public :
     Stack(){
         tos = -1;
         size = 5;
     }
     void push (int d){
         if (tos < size - 1){
            tos ++;
            arr[tos]=d;
         }
         else{
            cout << "\n stack is full";
         }

     }
     int pop(int &d){
     if(tos != -1){
        d=arr[tos];
        tos--;
        return 1;
     }
     else {
        return 0;
        cout << "\n stack is empty";
     }
     }


};

int main()
{
    Stack s1;
    s1.push(90);
    s1.push(60);
    s1.push(30);
    int x =0;
    if (s1.pop(x)==1)
        cout <<endl<<x;
    if (s1.pop(x)==1)
        cout <<endl<<x;
    s1.push(80);
    if (s1.pop(x)==1)
        cout <<endl<<x;
    return 0;
}
