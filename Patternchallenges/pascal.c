#include<stdio.h>
int main()
{
  int rows=5;
  for(int i=1;i<=rows;i++)
  {
    for(int j=0;j<rows-i;j++)
    {
      printf(" ");
    }
    int C=1;
    for(int k=1;k<=i;k++)
    {
      printf("%d ",C);
      C=C*(i-k)/k;
    }
  printf("\n");
  }
  return 0;
}

