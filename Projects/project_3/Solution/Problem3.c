#include<stdio.h> 
#include<conio.h> 
#include"Library .h"

void main(){ 
double area_under_A; 
area_under_A = find_area(-1,2,2,3,4,-3); 
printf("Area to be coloured black: %lf\n",area_under_A); 
}