 #include<stdio.h>
 int main(){
 int n,sum=0;
 printf("Enter a number");
 scanf("%d",&n);
 for(int i=2; i<=n*2; i+=2){
 sum+=i;
 }
 printf("%d ",sum);
 return 0;
 }
