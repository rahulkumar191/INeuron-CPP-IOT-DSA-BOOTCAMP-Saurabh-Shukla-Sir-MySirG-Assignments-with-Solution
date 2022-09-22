#include<stdio.h>
 int main(){
 char c;
 int a,b;
 while(1){
 printf("Choose any option\n");
 printf("a. Addition\nb. Subtraction\nc. Multiplication\nd. Division\ne. Exit\n");
 scanf("%c",&c);
 switch(c){
 case 'a':
 printf("Enter two number :");
 scanf("%d%d",&a,&b);
 printf("Sum of %d and %d is %d",a,b,a+b);
 break;
 case 'b':
 printf("Enter two number :");
 scanf("%d%d",&a,&b);
 printf("Subtraction of %d and %d is %d",a,b,a-b);
 break;
 case 'c':
 printf("Enter two number :");
 scanf("%d%d",&a,&b);
 printf("Multiplication of %d and %d is %d",a,b,a*b);
 break;
 case 'd':
 printf("Enter two number :");
 scanf("%d%d",&a,&b);
 printf("Division of %d and %d is %d",a,b,a/b);
 break;
 case 'e':
 break;
 default:
 printf("\nInvalid option");
 }
 }
 return 0;
 }