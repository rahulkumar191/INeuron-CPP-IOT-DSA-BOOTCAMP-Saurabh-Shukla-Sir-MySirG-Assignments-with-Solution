// Define a class StaticCount and create a static variable. Increment this variable in a
// function and call this 3 times and display the result.

#include<iostream>
using namespace std;
class StaticCount{
private:
    static int cnt;
public:
    static void incrementCount(){
        cnt++;
    }
    static void showCount(){
        cout<<"\nCount : "<<cnt;
    }
};
int StaticCount::cnt;
int main(){
    StaticCount::incrementCount();
    StaticCount::incrementCount();
    StaticCount::incrementCount();
    StaticCount::showCount();
    return 0;
}