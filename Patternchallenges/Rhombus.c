#include<stdio.h>
int main()
{
  int rows=5;
  for(int i=0;i<5;i++)
  {
    for(int j=0;j<rows-i-1;j++)
    {
      printf(" ");

    }
    for(int k=0;k<rows;k++)
    {
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}