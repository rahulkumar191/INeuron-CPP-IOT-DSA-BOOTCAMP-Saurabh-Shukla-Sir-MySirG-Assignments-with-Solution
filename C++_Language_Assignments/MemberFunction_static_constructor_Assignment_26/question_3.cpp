#include<iostream>
using namespace std;

class Cube{
private:
    int a;
    int volume;
public:
    Cube(){
        volume=0;
        cout<<"Enter a cube side in cm: ";
        cin>>a;
    }
    void calculateVolume(){
        volume=a*a*a;
    }
    void displayVolume(){
        cout<<"\n Volume : "<<volume<<" cm3";
    }

};

int main(){
    Cube q1;
    q1.calculateVolume();
    q1.displayVolume();
    return 0;
}
