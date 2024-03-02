#include<stdio.h>
int main()
{
    float r,h,area;
    printf("Enter radius of cylinder\n");
    scanf("%f",&r);
    printf("Enter height of cylinder\n");
    scanf("%f",&h);
    area= 2*3.142*r*h+(2*3.142*r*r);

    printf("The surface area of cylinder is %f\n",area);
    return 0;

}