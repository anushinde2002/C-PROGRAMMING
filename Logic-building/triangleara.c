#include<stdio.h>
int main()
{
  int b,h,area;
  printf("Enter base of triangle:");
  scanf("%d",&b);
  printf("Enter height of triangle:");
  scanf("%d",&h);
  area=b*h/2;
  printf("The area of triangle is %d:",area);
  return 0;
}