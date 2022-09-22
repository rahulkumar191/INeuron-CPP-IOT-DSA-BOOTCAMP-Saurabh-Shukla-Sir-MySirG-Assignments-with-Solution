#include<stdio.h>
 int main(){
 int a,b;
 printf("Enter first number :");
 scanf("%d",&a);
 printf("Enter second number :");
 scanf("%d",&b);
 if(a>=b)
 printf("Greater number is %d",a);
 else
 printf("Greater number is %d",b);
 return 0;
 }