#include<iostream>
using namespace std;
void printPascalTriangle(int rows){
    for (int i = 0; i < rows; i++)
    {
        int val = 1;
        for (int j = 1; j < (rows - i); j++)
        {
            cout << "   ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << "      " << val;
            val = val * (i - k) / (k + 1);
        }
        cout << endl << endl;
    }
}
int main(){
    int rows;
    cout<<"Enter number of rows : ";
    cin>>rows;
    printPascalTriangle(rows);
    return 0;
}
