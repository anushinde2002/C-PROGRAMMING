#include <stdio.h>

int main() {
    int n, i;

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

    // Printing all odd numbers in the array
    printf("Odd numbers in the array are: ");
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
