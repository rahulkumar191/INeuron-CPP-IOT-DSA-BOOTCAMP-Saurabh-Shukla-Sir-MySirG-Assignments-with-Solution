#include<stdio.h>
 int main(){
 int a,b,ans;
 printf("Enter first number number :");
 scanf("%d",&a);
 printf("Enter second number number :");
 scanf("%d",&b);
 int mn;
 if(a<b)
 mn=a;
 else
 mn=b;
 for(int i=1;i<mn;i++){
 if(a%i==0 && b%i==0){
 ans=i;
 }
 }
 printf("co-prime of %d and %d is %d ",a,b,ans);
 return 0;
 }
