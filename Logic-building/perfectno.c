#include<stdio.h>
#include<conio.h>
int main()
{
  int num,rem,sum=0,i;
  printf("Enter number:");
  scanf("%d",&num);
  for(i=1;i<num;i++)
  {
    rem=num%i;
    if(rem==0)
    {
      sum=sum+i;
    }
  }
  if(sum==num)
  {
    printf("%d is a perfect no",num);
  }
  else{
    printf("%d not a perfect no",num);
  }
  return 0;
  
}