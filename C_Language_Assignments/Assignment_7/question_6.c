#include<stdio.h>
 int main(){
 int n=3,check=1;
 printf("2 ");
 while(n<100){
 for(int i=2;i<n;i++){
 if(n%i==0){
 check=0;
 break;
 }
 }
 if(check){
 printf("%d ",n);
 }
 check=1;
 n++;
 }
 return 0;
 }
