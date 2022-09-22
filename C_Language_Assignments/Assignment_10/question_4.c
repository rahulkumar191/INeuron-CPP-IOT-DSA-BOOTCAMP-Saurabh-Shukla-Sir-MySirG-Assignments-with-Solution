#include<stdio.h>
 void EvenOdd(int);
 int main(){
 int n;
 printf("Enter a number :");
 scanf("%d",&n);
 printNaturalNumber(n);
 return 0;
 }
 void printNaturalNumber(int n){
 for(int i=1;i<=n;i++){
 printf("%d ",i);
 }
 }
