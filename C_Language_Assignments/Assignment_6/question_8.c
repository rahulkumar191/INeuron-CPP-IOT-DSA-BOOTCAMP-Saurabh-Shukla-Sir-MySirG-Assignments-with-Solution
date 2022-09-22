#include<stdio.h>
 int main(){
 int n;
 printf("Enter a number");
 scanf("%d",&n);
 for(int i=2; i<n; i++){
 if(!(n%i)){
 printf("It is not a prime number");
 return 0;
 }
 }
 printf("It is a prime number");
 return 0;
 }