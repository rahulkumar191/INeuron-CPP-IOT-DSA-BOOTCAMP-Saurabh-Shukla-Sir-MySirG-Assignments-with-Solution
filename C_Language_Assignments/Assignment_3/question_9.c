#include<stdio.h>
 int main(){
 int a,b,c,d,e, tmp;
 printf("Enter marks of five subject\n");
 scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
 tmp=(a+b+c+d+e)/5;
 if(tmp>=33){
 printf("passed");
 }
 else
 printf("Failed");
 return 0;
 }
