#include<stdio.h>
 int main(){
 int n,b,sum=0;
 printf("Enter a three digit number :");
 scanf("%d",&n);
 b=n%10;
 sum+=b;
 n/=10;
 b=n%10;
 sum+=b;
 n/=10;
 b=n%10;
 sum+=b;
 n/=10;
 printf("Sum of digit is :%d",sum);
 return 0;
 }