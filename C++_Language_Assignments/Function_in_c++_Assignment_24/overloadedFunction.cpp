#include<iostream>
#include<cmath>
using namespace std;
float area(int r){
    return (3.14*r*r);
}
float area(int l,int b){
    return (l*b);
}
float area(int s1,int s2,int s3){
    float s=(s1+s2+s3)/2.0;
    float x=(s*(s-s1)*(s-s2)*(s-s3));
    return sqrt(x);
    //return (6*());
}
int main(){
    int r=8;  //radius of circle
    int l=5;  //length of rectange
    int b=7;  //breadth of rectangle
    int s1=3,s2=6,s3=7;  //sides of triangle
    cout<<"\nArea of circle is "<<area(r);
    cout<<"\nArea of rectange is "<<area(l,b);
    cout<<"\nArea of triangle is "<<area(s1,s2,s3);
    return 0;
}
