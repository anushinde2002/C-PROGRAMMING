#include<stdio.h>
int main()
{
  int num1,num2;
  float avg;
  printf("Enter first number:");
  scanf("%d",&num1);
  printf("Enter second number:");
  scanf("%d",&num2);
  avg=(num1+num2)/2;
  printf("The avg of %d and %d is %.2f:",num1,num2,avg);
  return 0;
}


