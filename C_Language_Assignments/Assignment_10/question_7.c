#include<stdio.h>
 int numberOfCombinations(int ,int);
 int factorial(int);
 int main(){
 int n,r;
 printf("Enter n :");
 scanf("%d",&n);
 printf("Enter r :");
 scanf("%d",&r);
 printf("%d",numberOfCombinations(n,r));
 return 0;
 }
 int factorial(int n){
 int fac=1;
 for(int i=1;i<=n;i++){
 fac*=i;
 }
 return fac;
 }
 int numberOfCombinations(int n,int r){
 return (factorial(n)/(factorial(r)*factorial(n-r)));
 }