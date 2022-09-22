// 6. Create a class CString to represent a string.
// a) Overload the + operator to concatenate two strings.
// b) == to compare 2 strings.

#include<iostream>
using namespace std;
class CString{
private:
    string name;
public:
    CString(string s){
        name=s;
    }
    CString(){}
    void ShowData(){
        cout<<"String is : "<<name;
    }
    CString operator+(CString s){
          CString cs;
          cs.name=name+s.name;
        return cs;
    }
    void operator==(CString s){
        if(name==s.name) cout<<"\nSame Name";
        else cout<<"\nNot Same Name ";
    }

};
int main(){
    CString s1("Rahul Gupta"),s2("Rahul Gupta");
    CString concan=s1+s2;
    concan.ShowData();
    s1==s2;
    return 0;
}