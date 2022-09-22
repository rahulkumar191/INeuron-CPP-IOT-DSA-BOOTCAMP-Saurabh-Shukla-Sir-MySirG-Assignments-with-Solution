#include<stdio.h>
 int findAreaOfCircle(int);
 int main(){
 int r;
 printf("Enter a radius of circle :");
 scanf("%d",&r);
 int ans=findAreaOfCircle(r);
 printf("%d",ans);
 return 0;
 }
 int findAreaOfCircle(int r){
 int area=3.1432*r*r;
 return area;
 }