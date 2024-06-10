#include <stdio.h>

int main() {
    int n, i, max;

    // Asking the user to enter the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Declare an array of the given size
    int arr[n];

    // Asking the user to enter the elements of the array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize the max variable with the first element of the array
    max = arr[0];

    // Iterate through the array to find the maximum element
    for(i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    // Printing the maximum element
    printf("The maximum element in the array is: %d\n", max);

    return 0;
}
