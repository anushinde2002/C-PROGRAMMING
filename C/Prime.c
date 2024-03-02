#include<stdio.h>
int main()
{
    int num,count,prime=1;
    printf("Enter an positive integer no:");
    scanf("%d",&num);

    
    for(count=2;count<=num/2;count++)
    {
        if(num%count==0)
        {
            count++;
            break;
        }
    }
    if(prime==0)
    {
        printf("%d is prime no.\n",num);

    }
    else{
        printf("%d is not prime no.\n",num);
    }
    
    return 0;
}

