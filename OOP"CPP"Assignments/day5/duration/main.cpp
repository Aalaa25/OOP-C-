#include <iostream>

using namespace std;

class duration{
  int hours,minutes,seconds;
  public:
      duration(){
          hours = minutes = seconds = 0;
      }
      duration(int _hours,int _minutes,int _seconds){
          hours = _hours;
          minutes=_minutes;
          seconds=_seconds;
      }
      duration(long _seconds){
          hours = _seconds/3600;
          minutes=0;
          seconds=0;
      }
      duration(int _seconds){
          hours = _seconds/3600;
          minutes = 0;
          seconds=0;
      }
      duration(int _minutes, char) {
        hours = _minutes / 60;
        minutes =0;
        seconds =hours * 60 * 60;
    }

      int gethours(){
          return hours;
      }
      void sethours(int _hours){
          if(_hours>0){
                hours = _hours;
           }
           else{
             cout<<"you entered a wrong value";
           }
      }
      int getminutes(){
            return minutes;
      }
      void setminutes(int _minutes){
          if(_minutes >0 ){
                minutes=_minutes;
            }
            else{
                cout<<"you entered a wrong value";
            }
      }
      int getseconds(){
            return seconds;
      }
      void setseconds(int _seconds){
            if(_seconds>0){
                seconds=_seconds;
            }
            else{
                cout<<"you entered a wrong value";
            }
      }
      duration operator+(duration d){
          duration res;
          res.hours = d.hours + hours;
          res.minutes = d.minutes + minutes;
          res.seconds = d.seconds + seconds;

          return res;
      }
      duration operator+= (int n){
          hours = hours + n;
           return *this;
      }
      duration operator+ (int n){
          duration res;
          res.hours =hours + n ;
          res.minutes =minutes + n ;
          res.seconds =seconds + n ;

          return res;
      }
      duration operator++(){
        hours = hours +1;
        return *this;
      }
      duration operator++(int){
        duration temp = *this;
        hours +=1;
        return temp;
      }
      int operator>(duration d){
          if (hours > d.hours || minutes > d.minutes || seconds > d.seconds)
            return 1;
          else{
            return 0;
          }
      }
      int operator<=(duration d){
          if (hours <= d.hours || minutes <= d.minutes || seconds <= d.seconds)
            return 1;
          else{
            return 0;
          }
      }
      void print(){
         cout << "Hours : "<<hours <<" , "<<"Minutes : "<<minutes<<" , "<<"Seconds : "<<seconds<< "." ;
               }
};

int main()
{
    duration d;
    d.sethours(1);
    d.setminutes(30);
    d.setseconds(20);
    d.print();
    cout <<endl;
    duration d1(1,10,15);
    d1.print();
    cout <<endl;
    duration d2(3600);
    d2.print();
    cout <<endl;
    duration d3(7800);
    d3.print();
    cout <<endl;
    duration d4(666,'m');
    d4.print();
    cout <<endl;
    duration d5(1 , 60 , 700);
    duration d6(2 , 70 , 800);
    duration d7 = d5 + d6;
    d7.print();
    cout <<endl;
     d5 += 4;
    d5.print();
    cout <<endl;
    d6 =  d5 + 9;
    d6.print();
    cout <<endl;
    duration d8(4 , 20 , 500);
    ++d8;
    d8.print();
    cout <<endl;
    d8++;
    d8.print();
    cout <<endl;
    if (d1 > d2){
        cout << "d1 is bigger";
    }
    return 0;
}
