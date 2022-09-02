#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0)
            return false;
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(n==1){
        cout<<n<<" is nat a Prime number";
        return 0;
    }
    if(isPrime(n))
        cout<<n<<" is a Prime number";
    else
        cout<<n<<" is nat a Prime number";

    return 0;
    
}