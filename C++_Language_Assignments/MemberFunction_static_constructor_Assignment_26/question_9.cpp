// Define a class Bill and define its member function get() to take detail of customer ,
// calculateBill() function to calculate electricity bill using below tariff :
// Upto 100 unit RS. 1.20 per unit
// From 100 to 200 unit RS. 2 per unit
// Above 200 units RS. 3 per unit.
#include<iostream>
using namespace std;
class Bill{
private:
    int unit;
    float amount;
public:
    void get(){
        cout<<"\nEnter electricity unit : ";
        cin>>unit;
    }
    void calculateBill(){
        if(unit<100) amount=unit*1.20;
        else if(unit<200) amount=(100*1.20)+((unit-100)*2);
        else  amount=(100*1.20)+(100*2)+((unit-200)*3);
    }
    void showBill(){
        cout<<"\nAmount is : "<<amount;
    }
};
int main(){
    Bill b1;
    b1.get();
    b1.calculateBill();
    b1.showBill();
    return 0;
}