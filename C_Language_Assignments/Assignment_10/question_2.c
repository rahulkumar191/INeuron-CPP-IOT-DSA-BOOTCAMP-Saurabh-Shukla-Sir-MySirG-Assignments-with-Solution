#include<stdio.h>
 int findSI(int,int,int);
 int main(){
 int p,t,r;
 printf("Enter principle :");
 scanf("%d",&p);
 printf("Enter rate :");
 scanf("%d",&r);
 printf("Enter time :");
 scanf("%d",&t);
 int ans=findSI(p,t,r);
 printf("S.I = %d",ans);
 return 0;
 }
 int findSI(int p,int t,int r){
 int si=(p*t*r)/100;
 return si;
 }