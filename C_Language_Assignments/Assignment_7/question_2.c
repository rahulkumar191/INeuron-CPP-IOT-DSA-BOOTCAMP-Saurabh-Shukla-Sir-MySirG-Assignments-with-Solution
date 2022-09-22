#include<stdio.h>
 int main(){
 printf("Enter a number");
 int a;
 scanf("%d",&a);
 int p,n;
 p=0;
 n=1;
 for(int i=0;i<a;i++){
 printf("%d ",p);
 n=p+n;
 p=n-p;
 }
 return 0;
 }
//0 1 1 2 3 5 8 13 21 .....