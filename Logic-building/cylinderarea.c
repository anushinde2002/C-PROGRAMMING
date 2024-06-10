#include<stdio.h>
int main()
{
  int r,h,pi=3.142,area;
  printf("Enter radius of cylinder:");
  scanf("%d",&r);
  printf("Enter height of cylinder:");
  scanf("%d",&h);
  area=2*3.142*r*h+(2*3.142*r*r);
  printf("THe area of cylinder is %d:",area);
  return 0;
  
}