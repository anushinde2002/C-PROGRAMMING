#include <stdio.h>

int main() {
    int num, count = 0;
    
    // Asking the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handling the case for zero
    if (num == 0) {
        count = 1;
    } else {
        // Counting the digits
        while (num != 0) {
            num = num / 10;
            count++;
        }
    }

    // Printing the count of digits
    printf("The number of digits is: %d\n", count);

    return 0;
}
