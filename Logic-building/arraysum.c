#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Asking the user to enter the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Declare an array of the given size
    int arr[n];

    // Asking the user to enter the elements of the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of the elements
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Printing the sum of the elements
    printf("The sum of the elements in the array is: %d\n", sum);

    return 0;
}
