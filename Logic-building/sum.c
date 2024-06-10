#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    // Asking the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculating the sum of the digits
    while (num != 0) {
        digit = num % 10; // Extract the last digit
        sum += digit; // Add the digit to the sum
        num = num / 10; // Remove the last digit
    }

    // Printing the sum of the digits
    printf("The sum of the digits is: %d\n", sum);

    return 0;
}
