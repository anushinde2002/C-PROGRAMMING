#include<stdio.h>
int main()
{
    int rows=5;
    int i,j;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d",j+1);
        }
        printf("\n");
    }
}