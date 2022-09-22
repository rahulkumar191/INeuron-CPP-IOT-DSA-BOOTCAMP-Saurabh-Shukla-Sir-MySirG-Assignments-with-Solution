 #include<stdio.h>
 int main(){
 int n;
 printf("Enter a number :");
 scanf("%d",&n);
 if(n%3==0 || n%7==0)
 printf("%d can divided by 7 or 3",n);
 else
 printf("%d can not divided by 7 or 3",n);
 return 0;
 }
