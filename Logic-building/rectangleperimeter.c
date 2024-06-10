#include<stdio.h>
int main()
{
  int l,b,perimeter;
  printf("Enter length of rec:");
  scanf("%d",&l);
  printf("Enter breadth of rec:");
  scanf("%d",&b);
  perimeter=2*(l+b);
  printf("The perimter of rectangle is %d:",perimeter);
  return 0;
}