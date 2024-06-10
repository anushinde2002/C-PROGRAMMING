#include<stdio.h>
int main()
{
  int a,b,c,max;
  printf("Enter three no:");
  scanf("%d%d%d",&a,&b,&c);
  max=a>b?(a>c?a:c) :(b>c?b:c);
  printf("The maximum number is %d",max);
  return 0;
}