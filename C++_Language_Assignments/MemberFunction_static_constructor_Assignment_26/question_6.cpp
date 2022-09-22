/*Define a class student and write a program to enter student details using constructor
and define member function to display all the details.
*/
#include<iostream>
#include<string.h>
using namespace std;
class Student{
private:
    char name[25];
    char clas[25];
    int rollNo;
public:
    Student(char n[],char c[],int rn){
        strcpy(name,n);
        strcpy(clas,c);
        rollNo=rn;
    }
    void displayName(){
        cout<<"\n Name : "<<name;
    }
    void displayClass(){
        cout<<"\n Class : "<<clas;
    }
    void displayRollNo(){
        cout<<"\n Roll No : "<<rollNo;
    }
};

int main(){
    Student s1("Rahul Kumar","B.tech",5);
    s1.displayClass();
    s1.displayName();
    s1.displayRollNo();
    return 0;
}
