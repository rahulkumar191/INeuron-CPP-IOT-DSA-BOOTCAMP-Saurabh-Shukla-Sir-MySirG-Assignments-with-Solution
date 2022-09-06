#include<iostream>
using namespace std;
class Square{
public:
    static int cnt;
public:
    void findSquare(int n){
        cout<<"Square of "<<n<<" is : "<<n*n<<endl;
        cnt++;
    }
};
int Square::cnt=0;
int main(){
    Square s1,s2,s3;
    s1.findSquare(7);
    s2.findSquare(3);
    s1.findSquare(23);
    s3.findSquare(12);
    s2.findSquare(9);
    cout<<"Total Function Call is : "<<Square::cnt<<endl;
    return 0;
}

