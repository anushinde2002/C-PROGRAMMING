#include<stdio.h>

int main()
{
    int rows = 5;

    for(int i = 0; i < rows; i++)
    {
        // Loop for spaces
        for(int j = 0; j < 2 * (rows - i - 1); j++)
        {
            printf(" ");
        }
        // Loop for printing numbers
        for(int k = 0; k <= i; k++)
        {
            printf("%d ", k + 1);
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}

