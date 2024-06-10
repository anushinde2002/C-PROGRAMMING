#include<stdio.h>
int main()
{
  int a,b,temp;
  printf("Enter two number:");
  scanf("%d%d",&a,&b);
  temp=a;
  a=b;
  b=temp;
  printf("The swapping numbers are %d %d\n",a,b);
  return 0;
}