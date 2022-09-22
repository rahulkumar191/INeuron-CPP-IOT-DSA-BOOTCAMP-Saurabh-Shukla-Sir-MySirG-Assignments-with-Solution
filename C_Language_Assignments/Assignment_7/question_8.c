#include<stdio.h>
 int main(){
 int a,check=1;
 printf("Enter a number :");
 scanf("%d",&a);
 if(a==1){
 printf("2");
 return 0;
 }
 while(a++){
 for(int i=2;i<a;i++){
 if(a%i==0){
 check=0;
 break;
 }
 }
 if(check){
 printf("Next prime number is :%d",a);
 return 0;
 }
 check=1;
 }
 return 0;
 }
