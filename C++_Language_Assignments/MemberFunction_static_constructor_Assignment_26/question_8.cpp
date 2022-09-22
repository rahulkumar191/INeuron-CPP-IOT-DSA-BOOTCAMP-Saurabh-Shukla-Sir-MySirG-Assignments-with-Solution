/*
Define a class Bank and define member functions to read principal , rate of interest
and year. Another member functions to calculate simple interest and display it.
Initialize all details using constructor.
*/
#include<iostream>
using namespace std;
class Bank{
private:
    int p,t;
    float r,si;
public:
    Bank(){
        cout<<"\nEnter principal : ";
        cin>>p;
        cout<<"\nEnter rate of interest : ";
        cin>>r;
        cout<<"\nEnter time in Year : ";
        cin>>t;
    }
    void displayPrincipal(){
        cout<<"\nPrincipal : "<<p;
    }
    void displayRatOfInterest(){
        cout<<"\nRate of interest : "<<r;
    }
    void displayTime(){
        cout<<"\nTime : "<<t;
    }
    void calculateSimpleInterest(){
        si=(p*t*r)/100;
    }
    void displaySimpleInterest(){
        cout<<"\nSimple interest : "<<si;
    }

};
int main(){
    Bank b1;
    b1.displayPrincipal();
    b1.displayRatOfInterest();
    b1.displayTime();
    b1.calculateSimpleInterest();
    b1.displaySimpleInterest();
}
