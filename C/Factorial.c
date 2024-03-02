#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("Enter an integer no:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("The Factorial no is %d:",fact);
    return 0;
}
