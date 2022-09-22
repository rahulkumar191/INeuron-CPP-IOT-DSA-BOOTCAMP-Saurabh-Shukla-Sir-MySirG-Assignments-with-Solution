/*Define a class Date and write a program to Display
 Date and initialize date object using Constructors.
 */
#include<iostream>
using namespace std;

class Date{
private:
    int day,mon,year;
public:
    Date(int d,int m,int y){
        day=d;
        mon=m;
        year=y;
    }
    void displayDate(){
        cout<<"\n Date : "<<day<<"/"<<mon<<"/"<<year;
    }
};

int main(){
    Date d1(15,9,2022);
    d1.displayDate();
    return 0;
}
