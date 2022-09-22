#include<stdio.h>
 int main(){
 int a,b;
 printf("Enter first number :");
 scanf("%d",&a);
 printf("Enter second number :");
 scanf("%d",&b);
 a+=b;
 b=a-b;
 a-=b;
 printf("first number is %d and second number is %d",a,b);
 return 0;
 }