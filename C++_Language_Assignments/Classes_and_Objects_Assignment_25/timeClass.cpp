#include<iostream>
using namespace std;
class Time{
private:
    int hr;
    int mn;
    int sec;
public:
    void setTime(int x,int y,int z){
        hr=x;
        mn=y;
        sec=z;
    }
    void getTime(){
        cout<<hr<<" hr "<<mn<<" min "<<sec<<" sec ";
    }
};

int main(){
    Time t1,t2;
    t1.setTime(5,22,45);
    t1.getTime();
    return 0;
}

