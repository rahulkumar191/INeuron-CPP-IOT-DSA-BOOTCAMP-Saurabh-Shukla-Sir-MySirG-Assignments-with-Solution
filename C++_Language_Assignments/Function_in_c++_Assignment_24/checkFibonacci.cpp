#include<iostream>
using namespace std;
bool isFibonacci(int n){
    int a=0,b=1;
    while(a<=n){
        if(a==n)
            return true;
        a+=b;
        b=a-b;
    }
    return false;
}
int main(){
    int n;
    cout<<"Enter a number to check : ";
    cin>>n;
    if(isFibonacci(n))
        cout<<n<<" is a Fibonacci number ";
    else
        cout<<n<<" is not a Fibonacci number ";
    return 0;
}
