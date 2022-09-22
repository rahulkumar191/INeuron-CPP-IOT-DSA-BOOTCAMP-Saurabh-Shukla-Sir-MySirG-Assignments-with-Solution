#include<stdio.h>
 int main(){
 int n;
 printf("Enter week day number :");
 scanf("%d",&n);
 switch(n){
 case 1:
 printf("Happy sunday");
 break;
 case 2:
 printf("Happy monday");
 break;
 case 3:
 printf("Happy tuesday");
 break;
 case 4:
 printf("Happy wednesday");
 break;
 case 5:
 printf("Happy thirsday ");
 break;
 case 6:
 printf("Happy friday");
 break;
 case 7:
 printf("Happy saturday");
 break;
 default:
 printf("Invalid week day number");
 }
 return 0;
 }