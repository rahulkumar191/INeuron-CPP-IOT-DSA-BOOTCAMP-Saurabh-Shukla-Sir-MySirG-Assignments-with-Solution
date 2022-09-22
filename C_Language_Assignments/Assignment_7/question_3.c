 #include<stdio.h>
 int main(){
 printf("Enter a number :");
 int a;
 scanf("%d",&a);
 int p,n;
 p=0;
 n=1;
 while(p<=a){
 if(a==p){
 printf("Yes %d is Fibonnaci number",a);
 return 0;
 }
 n=p+n;
 p=n-p;
 }
 printf("No %d is not Fibonnaci number",a);
 return 0;
 }
//0 1 1 2 3 5 8 13 21 .....