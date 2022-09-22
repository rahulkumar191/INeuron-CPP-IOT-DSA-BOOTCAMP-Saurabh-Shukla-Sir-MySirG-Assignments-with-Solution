#include <iostream>
using namespace std;
class Complex{
private:
    int r,i;
public:
    void setData(int r,int i){
        r=r,i=i;
    }
    void getData(){
        cout<<"\nReal="<<r<<" Imag="<<i;
    }
};
int main(){
    Complex c1,c2;
    c1.setData(5,7);
    c1.getData();
    return 0;
}