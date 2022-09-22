#include<stdio.h>
 int main(){
 int a,b,check=1;
 printf("Enter first number :");
 scanf("%d",&a);
 printf("Enter second number :");
 scanf("%d",&b);
 if(a<=2){
 printf("2 ");
 a=3;
 }
 while(a<=b){
 for(int i=2;i<a;i++){
 if(a%i==0){
 check=0;
 break;
 }
 }
 if(check){
 printf("%d ",a);
 }
 check=1;
 a++;
 }
 return 0;
 }