#include<iostream>
using namespace std;
class Area{
public:
    void findArea(double r){
        cout<<"Area of circle Is : "<<3.14*r*r<<endl;
    }
    void findArea(int s){
        cout<<"Area of square Is : "<<s*s<<endl;
    }
    void findArea(double l,double b){
        cout<<"Area of rectangle Is : "<<l*b<<endl;
    }
};

int main(){
    Area a1,a2,a3;
    a1.findArea(5);
    a2.findArea(5,7);
    a3.findArea(3.6);
    return 0;
}
