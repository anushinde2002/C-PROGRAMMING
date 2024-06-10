#include<stdio.h>
int main()
{
  float cel,kel,fahr;
  printf("Enter temp in fahr:");
  scanf("%d",&fahr);
  cel=5.0/9*(fahr-32);
  kel=cel+273.15;
  printf("The temp in kelvin=%f\n",kel);
  printf("The temp in celcius=%f\n",cel);
  return 0;

}