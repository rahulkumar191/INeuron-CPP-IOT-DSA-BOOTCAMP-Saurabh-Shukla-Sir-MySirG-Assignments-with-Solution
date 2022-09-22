#include<stdio.h>
 int main(){
 int var;
 float amount;
 printf("Enter electricity unit\n");
 scanf("%d",&var);
 switch(var){
 case 0 ... 50:
 amount=(var*0.50);
 printf("Total amout is %f ",amount);
 break;
 case 51 ... 150:
 amount=(50*0.50)+(var-50)*0.75;
 printf("Total amount is %f",amount);
 break;
 case 151 ... 250:
 amount=(50*0.50)+(100*0.75)+(var-150)*1.20;
 printf("Total amount is %f",amount);
 break;
 default:
 amount=(50*0.50)+(100*0.75)+(100*1.20)+((var-250)*1.50)+(var-250)/5;
 printf("Total amount is %f",amount);
 break;
 }
 return 0;
 }