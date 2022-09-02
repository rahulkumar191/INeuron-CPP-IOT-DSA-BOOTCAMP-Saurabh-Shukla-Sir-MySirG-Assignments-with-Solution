#include<iostream>
using namespace std;
void xRaisedToPowerY(int x,int y){
    long long ans=1;
    while(y--){
        ans*=x;
    }
    cout<<"Ans : "<<ans;
}
int main(){
    int x,y;
    cout<<"Enter x : ";
    cin>>x;
    cout<<"Enter y : ";
    cin>>y;
    xRaisedToPowerY(x,y);
    return 0;
}
