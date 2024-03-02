#include<stdio.h>
int main()
{
    int i,n1=0,n2=1,n3,num,count;
    printf("Enter an integer no which u want to find fibo:");
    scanf("%d",&num);
    printf("\n%d\n%d\n",n1,n2);
    for(count=3;count<=num;count++)
    {
        n3=n1+n2;
        printf("%d",n3);
        n1=n2;
        n2=n3;
        

    }
    return 0;
}