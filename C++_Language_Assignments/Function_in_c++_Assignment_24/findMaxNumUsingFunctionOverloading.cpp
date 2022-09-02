#include<iostream>
using namespace std;
float findMax(float a,float b){
    return max(a,b);
}
int main(){
    int a=5,b=6;
    float x=5.345,y=4.06;
    cout<<"\n Max of "<<a<<" and "<<b<<" is "<<findMax(a,b);
    cout<<"\n Max of "<<x<<" and "<<y<<" is "<<findMax(x,y);
    return 0;
}
