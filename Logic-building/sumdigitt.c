#include<stdio.h>
int main()
{
  int i,n,rem,sum=0;
  printf("enter number:");
  scanf("%d",&n);
  while(n!=0)
  {
    rem=n%10;
    sum=sum+rem;
    n=n/10;

  }
  printf("The sum of digit is %d:",sum);
  return 0;
}

