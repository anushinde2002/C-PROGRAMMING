#include<stdio.h>
int main()
{
    int rows=5;
    int i, j, k;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<2 *(rows-i)-2;j++)
        {
            printf(" ");
        }
        for(k=0;k<=i;k++)
        {
            printf("%d",k+1);
        }
        printf("\n");
    }
    return 0;
}
