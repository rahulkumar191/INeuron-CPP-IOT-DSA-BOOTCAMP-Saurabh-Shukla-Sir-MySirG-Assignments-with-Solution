#include<stdio.h>
 int main(){
 int var;
 printf("Enter a year\n");
 scanf("%d",&var);
 var%=4;
 switch(var){
 case 0:
 printf("Leap year");
 break;
 default:
 printf("\nNot leap year");
 }
 return 0;
 }