#include<stdio.h>
 int EvenOdd(int);
 int main(){
 int n;
 printf("Enter a number :");
 scanf("%d",&n);
 int ans=findSI(n);
 printf("%d",ans);
 return 0;
 }
 int findSI(int n){
 int eo;
 if(n%2==0)
 eo=1;
 else
 eo=0;
 return eo;
 }