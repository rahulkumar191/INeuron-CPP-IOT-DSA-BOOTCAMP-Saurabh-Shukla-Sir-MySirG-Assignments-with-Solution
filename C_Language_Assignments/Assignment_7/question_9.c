#include<stdio.h>
 int main(){
 int a,digit=0,tempnum,armstong=0;
 printf("Enter a number :");
 scanf("%d",&a);
 tempnum=a;
 while(tempnum>0){
 tempnum/=10;
 digit++;
 }
 tempnum=a;
 while(tempnum>0){
 int n=tempnum%10;
 int tempdigit=digit;
 int poa=1;
 while(tempdigit--){
 poa*=n;
 }
 armstong+=poa;
 tempnum/=10;
 }
 if(a==armstong){
 printf("%d is a armstrong number ",a);
 }
 else{
 printf("%d is not a armstrong number ",a);
 }
 return 0;
 }