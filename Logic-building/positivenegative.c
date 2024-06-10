#include<stdio.h>
int main()
{
  int n1,n2;
  printf("Enter n1 and n2");
  scanf("%d%d",&n1,&n2);
  if(n1>n2)
  {
    printf("n1 is positive");
  }
  else{
    printf("n2 is negative");
  }
  return 0;
}