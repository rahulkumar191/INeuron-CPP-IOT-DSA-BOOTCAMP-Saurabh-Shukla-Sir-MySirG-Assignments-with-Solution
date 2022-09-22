#include<stdio.h>
 int isContains(int ,int);
 int main(){
 int n,d;
 printf("Enter number :");
 scanf("%d",&n);
 printf("Enter digit :");
 scanf("%d",&d);
 printf("%d",isContains(n,d));
 return 0;
 }
 int isContains(int n,int d){
 while(n>0){
 int dgt=n%10;
 n/=10;
 if(dgt==d){
 return 1;
 }
 }
 return 0;
 }