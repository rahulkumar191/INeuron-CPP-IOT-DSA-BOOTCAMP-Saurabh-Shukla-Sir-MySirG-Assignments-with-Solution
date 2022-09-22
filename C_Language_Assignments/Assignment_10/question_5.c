#include<stdio.h>
 void EvenOdd(int);
 int main(){
 int n;
 printf("Enter a number :");
 scanf("%d",&n);
 printOddNaturalNumber(n);
 return 0;
 }
 void printOddNaturalNumber(int n){
 for(int i=1;i<=n*2;i+=2){
 printf("%d ",i);
 }
 }
