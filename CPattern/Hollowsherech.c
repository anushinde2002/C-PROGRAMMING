#include <stdio.h>

int main() {
    int rows = 5; // Number of rows in the square pattern

    // Outer loop to iterate through each row
    for (int i = 0; i < rows; i++) {
        // Inner loop to print '*' or ' ' in each row
        for (int j = 0; j < rows; j++) {
            // Statement to check the boundary condition
            if (i > 0 && i < rows - 1 && j > 0 && j < rows - 1) {
                // If the current position is not on the border, print a space
                printf(" ");
            } else {
                // If the current position is on the border, print an asterisk
                printf("%c",'A'+j);
            }
        }
        printf("\n"); // Move to the next line after printing each row
    }
    return 0;
}
