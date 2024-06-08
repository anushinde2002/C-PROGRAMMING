#include <stdio.h>

int main() {
    int rows = 5; // Number of rows in the pyramid

    // Outer loop to iterate through each row
    for (int i = 0; i < rows; i++) {
        // Inner loop to print leading whitespaces
        for (int j = 0; j < 2 * (rows - i) - 1; j++) {
            printf(" ");
        }

        // Inner loop to print asterisks (*) and inner whitespaces
        for (int k = 0; k < 2 * i + 1; k++) {
            if (k == 0 || k == 2 * i || i == rows - 1) {
                // Print asterisks (*) at the beginning, end, and bottom row
                printf("* ");
            } else {
                // Print inner whitespaces
                printf(" ");
            }
        }
        printf("\n"); // Move to the next line after printing each row
    }
    return 0;
}
