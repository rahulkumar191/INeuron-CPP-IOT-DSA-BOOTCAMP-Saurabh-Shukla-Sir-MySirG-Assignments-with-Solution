#include<stdio.h>
 int main(){
 char c;
 printf("Enter a character :");
 scanf("%c",&c);
 if(c>=97 && c<=122)
 printf("Lowercase");
 else if(c>=65 && c<=90)
 printf("Uppercase");
 else
 printf("Enter a alphabet character");
 return 0;
 }