#include<iostream>
using namespace std;
class Circle{
public:
    void findAreaOfCircle(float r){
        cout<<"Area of circle Is : "<<3.14*r*r<<endl;
    }
};

int main(){
    Circle c1;
    c1.findAreaOfCircle(7);
    return 0;
}

