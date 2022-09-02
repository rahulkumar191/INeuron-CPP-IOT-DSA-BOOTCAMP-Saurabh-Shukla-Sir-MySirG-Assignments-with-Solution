#include<iostream>
using namespace std;
int addTwoOrThreeNumber(int a,int b,int c=0){
    return(a+b+c);
}
int main(){
    int a=5,b=7;
    cout<<addTwoOrThreeNumber(a,b);
    return 0;
}
