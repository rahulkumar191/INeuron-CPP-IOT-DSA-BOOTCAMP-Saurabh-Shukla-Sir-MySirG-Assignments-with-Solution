#include<stdio.h>
 int main(){
 long long n,cnt=0;
 printf("Enter a number");
 scanf("%d",&n);
 if(n==0){
 printf("Number of digit is 1");
 return 0;
 }
 while(n>0){
 n/=10;
 cnt++;
 }
 printf("Number of digit is %d",cnt
 );
 return 0;
 }