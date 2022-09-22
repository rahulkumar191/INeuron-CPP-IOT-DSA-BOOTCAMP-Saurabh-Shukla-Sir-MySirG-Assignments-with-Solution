#include<stdio.h>
 int main(){
 int a;
 printf("Enter a number :");
 scanf("%d",&a);
 int ld=a%10;
 a-=ld;
 printf("Now the number is :%d",a);
 return 0;
 }
