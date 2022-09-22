#include<stdio.h>
 int main(){
 char c;
 printf("Enter a character :");
 scanf("%c",&c);
 if(c>=97 && c<=122)
 printf("Lowercase");
 else if(c>=65 && c<=90)
 printf("Uppercase");
 else if(c>=32&&c<=47 || c>=58&&c<=64 || c>=91&&c<=96 || c>=123&&c<=126)
 printf("Special character");
 else
 printf("Number");
 return 0;
 }