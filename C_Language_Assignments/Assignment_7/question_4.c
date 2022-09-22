#include<stdio.h>
 int main(){
 int a,b,n=2,ans=1,x;
 printf("Enter first number :");
 scanf("%d",&a);
 x=a;
 printf("Enter second number :");
 scanf("%d",&b);
 while(1){
 if(a%n==0 && b%n==0){
 ans*=n;
 a/=2;
 b/=2;
 }
 else{
 n++;
 }
 if(n==10){
 printf("H.C.F of %d is %d",x,ans);
 return 0;
 }
 }
 }