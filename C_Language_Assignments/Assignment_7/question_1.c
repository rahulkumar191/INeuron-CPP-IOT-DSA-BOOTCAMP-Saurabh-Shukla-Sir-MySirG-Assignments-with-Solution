#include<stdio.h>
 int main(){
 printf("Enter a number");
 int a;
 scanf("%d",&a);
 int p,n;
 p=0;
 n=1;
 for(int i=1;i<a;i++){
 n=p+n;
 p=n-p;
 }
 printf("%dth Fibonnaci is %d",a,p);
 return 0;
 }
//0 1 1 2 3 5 8 13 21 .....