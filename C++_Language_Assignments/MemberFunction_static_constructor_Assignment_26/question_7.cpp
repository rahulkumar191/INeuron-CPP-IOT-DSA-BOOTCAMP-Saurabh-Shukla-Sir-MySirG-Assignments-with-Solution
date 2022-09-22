/*
Define a class Box and write a program to enter length, breadth and height and
initialize objects using constructor also define member functions to calculate volume
of the box.
*/

#include<iostream>
using namespace std;
class Box{
private:
    int length, breadth ,height,volume;
public:
    Box(){
        cout<<"\nEnter length : ";
        cin>>length;
        cout<<"\nEnter breadth : ";
        cin>>breadth;
        cout<<"\nEnter height : ";
        cin>>height;
    }
    void calculateVolume(){
        volume=length*breadth*height;
    }
    void displayVolume(){
        cout<<"\nVolume : "<<volume;
    }
};
int main(){
    Box b1;
    b1.calculateVolume();
    b1.displayVolume();
    return 0;
}
