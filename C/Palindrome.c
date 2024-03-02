#include<stdio.h>
int main()
{
    int num,rem,rev=0,temp;
    printf("Enter an integer no:");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;


    }
    
    if(temp==rev)
    {
        printf("Palindrome no\n");
    }
    else{
        printf("Non Palindrome no\n");

    }
}
