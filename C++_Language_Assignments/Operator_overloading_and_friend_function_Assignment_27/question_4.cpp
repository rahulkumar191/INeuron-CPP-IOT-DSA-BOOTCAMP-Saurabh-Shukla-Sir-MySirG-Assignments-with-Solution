// Create a class Time which contains:
// - Hours
// - Minutes
// - Seconds
// Write a C++ program using operator overloading for the following:
// 1. = = : To check whether two Times are the same or not.
// 2. >> : To accept the time.
// 3. << : To display the time.

#include<iostream>
using namespace std;
class Time{
private:
    int hours,minutes,seconds;
public:
    void & operator >> (){
        cout<<"\nEnter Time :-";
        cout<<"Enter Hours : ";
        cin>>hours;
        cout<<"Enter Minutes : ";
        cin>>minutes;
        cout<<"Enter Seconds : ";
        cin>>seconds;
    }
    void showTime(){
        cout<<"\nHours : "<<hours;
        cout<<"\nMinutes : "<<minutes;
        cout<<"\nSeconds : "<<seconds;
    }

};
int main(){

    return 0;
}