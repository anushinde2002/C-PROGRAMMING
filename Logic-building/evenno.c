#include <stdio.h>

int main() {
    int num, digit;
    
    // Asking the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Printing even digits in the number
    printf("Even digits in %d are: ", num);

    // Extract digits and check if they are even
    while (num != 0) {
        digit = num % 10; // Extract the last digit
        if (digit % 2 == 0) {
            printf("%d ", digit); // Print if the digit is even
        }
        num = num / 10; // Remove the last digit
    }

    printf("\n");

    return 0;
}
