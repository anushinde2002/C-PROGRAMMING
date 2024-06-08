#include<stdio.h>
int main()
{
    int rows = 5;
    int i, j, k;
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < 2 * i; j++) // Removed the semicolon here
        {
            printf(" ");
        }
        for(k = 0; k < 2 * (rows - i) - 1; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
