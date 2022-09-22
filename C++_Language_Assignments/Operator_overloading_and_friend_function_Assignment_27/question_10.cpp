// 10.Class Matrix
// {
// int a[3][3];
// Public:
// //methods;
// };
// Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator
// overloading).

#include <iostream>
using namespace std;
class Matrix{
private:
    int a[3][3];
public:
    void inputMatrix(){
        cout<<"\nEnter Matrix Element (3 X 3)"<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>a[i][j];
            }
        }
    }
    Matrix operator+(Matrix m){
        Matrix sum;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                sum.a[i][j]=a[i][j]+m.a[i][j];
            }
        }
        return sum;
    }
    void printMatrix(){
        cout<<"Matrix is : "<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<a[i][j]<<"   ";
            }
            cout<<endl;
        }
    }
};

int main()
{
    Matrix m1,m2;
    m1.inputMatrix();
    m2.inputMatrix();
    m1.printMatrix();
    m2.printMatrix();
    Matrix sum=m1+m2;
    sum.printMatrix();
    return 0;
}