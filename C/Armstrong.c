#include<stdio.h>
int main()
{
    int i,num,rem,sum=0,temp;
    printf("Enter an integer no\n");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        rem=num%10;
        sum=sum+(rem*rem*rem);
        num=num/10;

    }
    if(temp==sum)
    {
        printf("Armstrong no\n");

    }
    else{
        printf("Not Armstrong no\n");
    }
}