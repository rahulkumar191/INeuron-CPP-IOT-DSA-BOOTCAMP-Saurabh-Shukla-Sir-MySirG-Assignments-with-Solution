#include<iostream>
using namespace std;
void swapUsingReference(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int a=5;
    int b=8;
    swapUsingReference(a,b);
    cout<<a<<" "<<b;
    return 0;
}
