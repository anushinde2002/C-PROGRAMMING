#include<stdio.h>
int main()
{
  int side,area;
  printf("Enter side of square:");
  scanf("%d",&side);
  area=side*side;
  printf("The area of square is %d:",area);
  return 0;
}