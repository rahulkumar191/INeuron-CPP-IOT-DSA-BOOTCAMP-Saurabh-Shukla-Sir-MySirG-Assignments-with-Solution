#include<iostream>
using namespace std;
class ReverseNumber{
public:
    void findRevNum(int n){
        cout<<"Reverse number is : ";
        while(n>0){
            cout<<n%10;
            n/=10;
        }
    }
};

int main(){
    ReverseNumber rn1;
    rn1.findRevNum(123546);
    return 0;
}

