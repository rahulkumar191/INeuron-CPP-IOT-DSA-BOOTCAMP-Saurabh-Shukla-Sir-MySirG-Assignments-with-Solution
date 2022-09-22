#include<stdio.h>
 int main(){
 float b,s,pl;
 printf("Enter buy price :");
 scanf("%f",&b);
 printf("Enter sell price :");
 scanf("%f",&s);
 if(b==s){
 printf("No profit no loss");
 }
 else if(b<s){
 pl=(s-b)*100/b;
 printf("Profit is %f%%",pl);
 }
 else{
 pl=(b-s)*100/b;
 printf("Loss is %f%%",pl);
 }
 return 0;
 }