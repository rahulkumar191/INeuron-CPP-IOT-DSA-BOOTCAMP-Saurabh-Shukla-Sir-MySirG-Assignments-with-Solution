#include<iostream>
using namespace std;
class Factorial{
public:
    void findFactorial(int n){
        long long int fact=1;
        while(n)
            fact*=n--;
        cout<<"Factorial : "<<fact;
    }
};

int main(){
    Factorial f1;
    f1.findFactorial(0);
    return 0;
}

