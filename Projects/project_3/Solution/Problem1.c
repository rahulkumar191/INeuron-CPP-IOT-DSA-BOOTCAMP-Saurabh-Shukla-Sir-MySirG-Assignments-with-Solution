#include<stdio.h> 
#include<conio.h> 
#include"Library .h"
void main(){ 
  double angle_at_chowk;
  // pass as (x1,y1,x2,y2)
  angle_at_chowk = find_angle(5,1,2,3); 
  printf("Angle at which these roads meets at 123 Chowk: %lf\n",angle_at_chowk); 
}
