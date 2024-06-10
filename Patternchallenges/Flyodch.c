#include<stdio.h>
int main()
{
  int rows=4;
  int ch='A';
  for(int i=0;i<rows;i++)
  {
    for(int j=0;j<=i;j++)
    {
      printf("%c ",ch++);
      
    }
    printf("\n");
  }
  return 0;
}