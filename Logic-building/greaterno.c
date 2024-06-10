#include <stdio.h>

int main() {
    int num, greaterNum;

    // Asking the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Finding the next greater number
    greaterNum = num + 1;

    // Printing the next greater number
    printf("The next greater number after %d is %d\n", num, greaterNum);

    return 0;
}
