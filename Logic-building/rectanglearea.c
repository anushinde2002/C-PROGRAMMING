#include<stdio.h>
int main()
{
  int l,b,area;
  printf("Enter length of rec:");
  scanf("%d",&l);
  printf("Enter breadth of rec:");
  scanf("%d",&b);
  area=l*b;
  printf("The area of rec is %d:",area);
  return 0;
}