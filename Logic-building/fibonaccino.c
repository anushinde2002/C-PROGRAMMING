#include<stdio.h>

int main()
{
  int n1=0, n2=1, n3, count, num;
  
  // Prompt the user to enter the number of terms
  printf("Enter the number of terms to be printed: ");
  scanf("%d", &num);

  // Print the first two terms of the Fibonacci series
  printf("\n%d\n%d\n", n1, n2);
  
  // Loop to print the next terms in the Fibonacci series
  for(count = 2; count < num; count++)  // Change <= to <
  {
    n3 = n1 + n2;
    printf("%d\n", n3);
    n1 = n2;
    n2 = n3;
  }

  return 0;
}
