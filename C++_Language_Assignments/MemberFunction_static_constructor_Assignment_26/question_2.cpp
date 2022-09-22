#include<iostream>
using namespace std;

class Time{
private:
    int h,m,s;
public:
    void setTime(int a,int b,int c){
        h=a;
        m=b;
        s=c;
    }
    void showTime(){
        cout<<"\n Time  "<<h<<":"<<m<<":"<<s;
    }
    void normalize(){
        m+=(s/60);
        h+=(m/60);
        s%=60;
        m%=60;
    }
    Time add(Time t){
        Time temp;
        temp.h=h+t.h;
        temp.m=m+t.m;
        temp.s=s+t.s;
        return temp;
    }
};


int main(){
    Time t1,t2;
    t1.setTime(8,49,34);
    t2.setTime(12,59,67);
    Time sum=t1.add(t2);
    sum.normalize();
    sum.showTime();
    return 0;
}
