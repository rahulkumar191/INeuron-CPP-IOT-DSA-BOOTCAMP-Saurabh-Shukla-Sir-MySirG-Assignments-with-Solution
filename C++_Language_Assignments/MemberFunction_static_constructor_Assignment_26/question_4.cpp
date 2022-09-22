#include<iostream>
using namespace std;

class Counter{
private:
    int cnt,A;
public:
    Counter(){
        cnt=0;
    }
     void inc_count (){
            cnt++;
        }
    void getCount(){
        cout<<cnt<<endl;
    }

};

int main(){
    Counter c1,c2;
    c1.inc_count();
    c2.inc_count();
    c2.inc_count();
    c1.inc_count();
    c2.inc_count();
    c1.getCount();
    c2.getCount();
    return 0;
}
