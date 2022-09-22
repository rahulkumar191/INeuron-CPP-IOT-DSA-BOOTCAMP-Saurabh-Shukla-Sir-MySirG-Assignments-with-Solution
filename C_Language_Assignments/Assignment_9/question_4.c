#include<stdio.h>
 int main(){
 char op;
 int a,b,c;
 printf("Choose any option\n");
 printf("a. isosceles triangle\nb. right angled triangle\nc. equilateral triangle\nd. Exit\n");
 scanf("%c",&op);
 switch(op){
 case 'a':
 printf("Enter three number :");
 scanf("%d%d%d",&a,&b,&c);
 if(a==b || b==c ||c==a)
 printf("isosceles triangle");
 break;
 case 'b':
 printf("Enter three number :");
 scanf("%d%d%d",&a,&b,&c);
 if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
 printf("right angled triangle");
 break;
 case 'c':
 printf("Enter three number :");
 scanf("%d%d%d",&a,&b,&c);
 if(a==b && b==c)
 printf("equilateral triangle");
 break;
 case 'd':
 break;
 default:
 printf("\nInvalid option");
 }
 return 0;
 }
