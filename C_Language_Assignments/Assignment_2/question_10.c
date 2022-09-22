 #include<stdio.h>
 int main(){
 int n,d;
 printf("Enter a number :");
 scanf("%d",&n);
 printf("Enter a digit :");
 scanf("%d",&d);
 n*=10;
 n+=d;
 printf("Now the number is :%d",n);
 return 0;
 }
