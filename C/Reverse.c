#include<stdio.h>
int main()
{
    int i,num,rem,rev=0;
    printf("Enter an integer no\n");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;


    }
    printf("Reverse no is %d:",rev);
}