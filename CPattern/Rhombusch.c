#include<stdio.h>
int main()
{
    int rows=5;
    int i,j,k;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<rows-i-1;j++)
        {
            printf(" ");
        }
        for(k=0;k<rows;k++)
        {
            printf("%c ",'A'+k);
        }
        printf("\n");
    }
    
}