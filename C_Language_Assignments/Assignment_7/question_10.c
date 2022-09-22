#include<stdio.h>
 int main(){
 int a;
 printf("Enter a number :");
 scanf("%d",&a);
 printf("All Armstrong number under %d is :",a);
 for(int i=1;i<=a;i++){
 int armstong=0;
 int tempnum=i;
 int digit=0;
 while(tempnum>0){
 tempnum/=10;
 digit++;
 }
 tempnum=i;
 while(tempnum>0){
 int n=tempnum%10;
 int tempdigit=digit;
 int poa=1;
 while(tempdigit--){
 poa*=n;
 }
 armstong+=poa;
 tempnum/=10;
 }
 if(armstong>a){
 printf("END");
 return 0;
 }
 if(i==armstong)
 printf("%d ",armstong);
 }
 return 0;
 }