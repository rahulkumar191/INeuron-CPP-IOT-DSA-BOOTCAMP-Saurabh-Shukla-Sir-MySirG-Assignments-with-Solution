#include<iostream>
using namespace std;
float add(double a,double b){
    return (a+b);
}
int main(){
    int a=5;
    int b=6;
    float x=5.345;
    double y=4.06;
    cout<<"\n Sum of "<<a<<" and "<<b<<" is "<<add(a,b);
    cout<<"\n Sum of "<<x<<" and "<<y<<" is "<<add(x,y);
    return 0;
}
