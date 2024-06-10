#include<stdio.h>

int main() {
    int rows = 5;
    for(int i = 0; i < rows; i++) {
        // Loop for printing spaces
        for(int j = 0; j < 2 * (rows - i - 1); j++) {
            printf(" ");
        }
        // Loop for printing alphabets
        for(int k = 0; k <= i; k++) {
            printf("%c ", 'A' + k); // Incrementing character for each row
        }
        printf("\n");
    }
    return 0;
}
