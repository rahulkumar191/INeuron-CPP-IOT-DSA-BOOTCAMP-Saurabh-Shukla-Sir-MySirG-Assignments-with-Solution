#include<stdio.h>
 int main(){
 int n;
 printf("Enter a number :");
 scanf("%d",&n);
 for(int i=1;i<=n;i++){
 int a=0;
 for(int j=1;j<=n*2;j++){
 if(j>n-i && j<n+i){
 if(j>n){
 a--;
 printf("%d",a);
 }
 else {
 a++;
 printf("%d",a);
 }
 }
 else
 printf(" ");
 }
 printf("\n");
 }
 return 0;
 }