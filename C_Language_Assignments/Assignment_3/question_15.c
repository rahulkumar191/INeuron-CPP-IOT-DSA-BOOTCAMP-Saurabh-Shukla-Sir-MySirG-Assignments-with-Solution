#include<stdio.h>
 int main(){
 int n;
 printf("Enter a number :");
 scanf("%d",&n);
 if(n%2==0 && n%3==0)
 printf("%d can divided by 3 and 2",n);
 else
 printf("%d can not divided by 3 and 2",n);
 return 0;
 }