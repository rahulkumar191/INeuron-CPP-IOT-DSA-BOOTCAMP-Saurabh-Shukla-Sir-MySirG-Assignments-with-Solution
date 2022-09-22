// Write a C++ program to add two complex numbers using operator overloaded by a
// friend function.

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
    friend Complex add(Complex,Complex);
};
Complex add(Complex a,Complex b){
    Complex temp;
    temp.real=a.real+b.real;
    temp.img=a.img+b.img;
    return temp;
}

int main(){
    Complex c1,c2;
    c1.setData();
    c2.setData();
    Complex sum= add(c1,c2);
    cout<<"\nSum is : ";
    sum.showData();
    return 0;
}