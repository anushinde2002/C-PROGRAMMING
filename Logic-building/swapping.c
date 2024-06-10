#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter two numbers:");
  scanf("%d%d",&a,&b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("The swapping numbers is %d %d\n:",a,b);
  return 0;
}