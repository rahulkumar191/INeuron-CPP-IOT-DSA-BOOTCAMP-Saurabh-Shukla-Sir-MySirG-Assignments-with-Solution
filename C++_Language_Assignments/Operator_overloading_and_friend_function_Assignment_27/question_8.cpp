// 8. Consider a class Matrix
// Class Matrix
// {
// int a[3][3];
// Public:
// //methods;
// };
// Overload the - (Unary) should negate the numbers stored in the object.

#include <iostream>
using namespace std;
class Matrix{
private:
    int a[3][3];
public:
    Matrix(){
        cout<<"\nEnter Matrix Element (3 X 3)"<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>a[i][j];
            }
        }
    }
    void operator-(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                a[i][j]=-(a[i][j]);
            }
        }
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
    Matrix m1;
    m1.printMatrix();
    -m1;
    m1.printMatrix();
    return 0;
}