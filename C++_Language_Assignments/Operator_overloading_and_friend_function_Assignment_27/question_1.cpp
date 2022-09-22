// Define a class Complex with appropriate instance variables and member functions.
// Define following operators in the class:
// a. +
// b. -
// c. *
// d. ==

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
    Complex operator+(Complex c){
        Complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }
    Complex operator-(Complex c){
        Complex temp;
        temp.real=real-c.real;
        temp.img=img-c.img;
        return temp;
    }
    Complex operator*(Complex c){
        Complex temp;
        temp.real=real*c.real;
        temp.img=img*c.img;
        return temp;
    }
    bool operator==(Complex c){
        if(real==c.real && img==c.img) 
        return true;
        return false;
    }
};
int main(){
    Complex c1,c2;
    c1.setData();
    c2.setData();
    Complex sum=c1+c2;
    Complex sub=c1-c2;
    Complex mul=c1*c2;
    bool flag=c1==c2;
    cout<<"\n c1==c2 : "<<flag;
    cout<<"\n Sum : ";sum.showData();
    cout<<"\n Subtract : ";sub.showData();
    cout<<"\n Multiply : ";mul.showData();
    return 0;
}