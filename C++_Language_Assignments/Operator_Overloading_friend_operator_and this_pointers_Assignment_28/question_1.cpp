// Define a class Complex with appropriate instance variables and member functions.
// Overload following operators
// a. << insertion operator
// b. >> extraction operator
#include <iostream>
using namespace std;
class Complex{
private:
    int r,i;
public:
    void setData(int a,int b){
        r=a,i=b;
    }
    void getData(){
        cout<<"\nReal="<<r<<" Imag="<<i;
    }
    friend ostream& operator<<(ostream&,Complex&);
    friend istream& operator>>(istream&,Complex&);
};
ostream& operator<<(ostream &print,Complex &c){
    print<<"\n Real : "<<c.r<<" Img : "<<c.i<<endl;
    return print;
}
istream& operator>>(istream &input,Complex &c){
    cout<<"Enter Complex number : ";
    input>>c.r>>c.i;
    return input;
}

int main(){
    Complex c1,c2;
    c1.setData(5,7);
    c1.getData();
    cout<<c1;
    cin>>c2;
    cout<<c2;
    return 0;
}