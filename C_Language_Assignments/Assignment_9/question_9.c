 #include<stdio.h>
 int main(){
 int var;
 float amount;
 printf("Enter a even number \n");
 scanf("%d",&var);
 int rem;
 rem=var%2;
 switch(rem){
 case 0:
 printf("Next upper nearest odd number is %d ",var+1);
 break;
 default:
 printf("it is not even number\n");
 }
 return 0;
 }