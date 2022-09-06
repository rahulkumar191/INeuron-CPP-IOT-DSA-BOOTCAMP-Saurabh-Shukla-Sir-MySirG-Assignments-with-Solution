#include<iostream>
using namespace std;
class LargestNumber{
public:
    void largestNumber(int a,int b,int c){
        int mx=INT_MIN;
        mx=max(a,max(b,c));
        cout<<"Largest Number is : "<<mx;
    }
};

int main(){
    LargestNumber lr1;
    lr1.largestNumber(1,5,87);
    return 0;
}

