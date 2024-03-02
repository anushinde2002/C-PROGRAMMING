#include<stdio.h>
int main()
{
    int i,num,sum=0;
    printf("Enter an no\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    printf("Sum of n natural no is %d\n",sum);
}
