#include<stdio.h>
 int main(){
 long long n,cnt=0;
 printf("Enter a number");
 scanf("%d",&n);
 printf("Reverse number is :");
 while(n>0){
 printf("%d",n%10);
 n/=10;
 }
 return 0;
 }