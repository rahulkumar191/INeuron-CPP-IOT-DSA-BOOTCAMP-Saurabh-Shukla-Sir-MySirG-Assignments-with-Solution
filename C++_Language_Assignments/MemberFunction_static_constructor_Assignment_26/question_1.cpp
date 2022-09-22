#include<iostream>
using namespace std;

class Complex{
private:
    int a;
    int b;
public:
    void setData(int x,int y){
        a=x;
        b=y;
    }
    void showData(){
        cout<<"\n a="<<a<<" b="<<b;
    }
    Complex add(Complex c){
        Complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
};

int main(){
    Complex c1,c2;
    c1.setData(3,4);
    c2.setData(5,22);
    Complex sum=c1.add(c2);
    sum.showData();
    return 0;
}
