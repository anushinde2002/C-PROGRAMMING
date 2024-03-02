#include<stdio.h>
int main()
{
    int i,num,rem,sum=0;
    printf("Enter an integer no\n");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;

    }
    printf("Sum of digit is %d\n",sum);
}