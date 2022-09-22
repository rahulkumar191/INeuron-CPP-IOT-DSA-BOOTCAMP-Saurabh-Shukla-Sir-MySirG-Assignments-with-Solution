// Consider following class Numbers
// class Numbers
// {
// int x,y,z;
// public:
// // methods
// };
// Overload the operator unary minus (-) to negate the numbers.

#include<iostream>
using namespace std;
class Numbers{
private:
    int x,y,z;
public:
    Numbers(int a,int b,int c){
        x=a,y=b,z=c;
    }
    void operator-(){
        x=-x;
        y=-y;
        z=-z;
    }
    void showData(){
        cout<<"\nX="<<x;
        cout<<"\nY="<<y;
        cout<<"\nZ="<<z;
    }
};
int main(){
    Numbers n1(5,8,9);
    -n1;
    n1.showData();
    return 0;
}