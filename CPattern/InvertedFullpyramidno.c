#include<stdio.h>
int main()
{
    int rows=5;
    int i,j,k;
    for(i=0; i<rows; i++)
    {
        for(j=0; j<2* i; j++)
        {
            printf(" ");
        }
        for(k=0; k<2*(rows-i)-1;k++)
        {
            printf("%d ",k+1);
        }
        printf("\n");
    }
    return 0;
}