#include<iostream>
using namespace std;
class Complex{
private:
    int real;
    int img;
public:
    void setValue(int x,int y){
        real=x;
        img=y;
    }
    void getValue(){
        cout<<real<<"+"<<img<<"i";
    }
};

int main(){
    Complex c1,c2;
    c1.setValue(5,7);
    c1.getValue();
    return 0;
}
