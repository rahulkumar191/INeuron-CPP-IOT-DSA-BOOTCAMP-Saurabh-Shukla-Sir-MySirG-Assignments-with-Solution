#include<iostream>
using namespace std;
int findHighestValueDigit(int);
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<findHighestValueDigit(n);
}
int findHighestValueDigit(int n){
    int ans=INT_MIN;
    while(n>0){
        ans=max(ans,n%10);
        n/=10;
    }
    return ans;
}
