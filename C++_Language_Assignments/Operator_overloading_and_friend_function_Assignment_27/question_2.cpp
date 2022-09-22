// Write a C++ program to overload unary operators that is increment and decrement.

#include<iostream>
using namespace std;
class Complex{
private:
    int real,img;
public:
    void setData(){
        cout<<"\nEnter object data ";
        cout<<"\nEnter real part : ";
        cin>>real;
        cout<<"Enter imag part : ";
        cin>>img;
    }
    void showData(){
        cout<<real<<"+"<<img<<"i";
    }
    void operator++(){
        real++;
        img++;
    }
    void operator--(){
        real--;
        img--;
    }
};
int main(){
    Complex c1,c2;
    c1.setData();
    c2.setData();
    ++c1;
    --c2;
    cout<<"\nAfter increment c1 is : ";
    c1.showData();
    cout<<"\nAfter decrement c2 is : ";
    c2.showData();
    return 0;
}