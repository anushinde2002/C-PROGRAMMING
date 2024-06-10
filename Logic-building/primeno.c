#include<stdio.h>
int main()
{
  int num,count,prime=2;
  printf("Enter an number:");
  scanf("%d",&num);
  for(count=2;count<num;count++)
  {
    if(num%count==0)
    {
      prime=0;
      break;

    }
  }
  if(num==0)
  {
    printf("%d is prime no\n",num);
    
  }
  else{
    printf("%d is not prime no\n",num);
  }
  return 0;
}