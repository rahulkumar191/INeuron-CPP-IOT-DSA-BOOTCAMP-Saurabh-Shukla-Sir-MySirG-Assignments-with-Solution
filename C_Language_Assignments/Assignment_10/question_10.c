#include<stdio.h>
 void printAllPrimeFactors(int);
 int main(){
 int n;
 printf("Enter number :");
 scanf("%d",&n);
 printAllPrimeFactors(n);
 return 0;
 }
 void printAllPrimeFactors(int n){
 int x=2,a=n;
 while(x<=a){
 if(a%x==0){
 printf("%d ",x);
 a/=x;
 }
 else{
 x++;
 }
 }
 }
