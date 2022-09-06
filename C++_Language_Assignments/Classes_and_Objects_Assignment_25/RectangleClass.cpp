#include<iostream>
using namespace std;
class Rectangle{
public:
    void findAreaOfRectangle(int l,int b){
        cout<<"Area of rectangle Is : "<<l*b<<endl;
    }
};

int main(){
    Rectangle r1;
    r1.findAreaOfRectangle(5,7);
    return 0;
}
