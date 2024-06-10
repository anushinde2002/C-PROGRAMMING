#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;
    int min1, min2;

    // Asking the user to enter the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Check if the array size is less than 2
    if (n < 2) {
        printf("Array should have at least two elements.\n");
        return 1;
    }

    // Declare an array of the given size
    int arr[n];

    // Asking the user to enter the elements of the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize the min1 and min2 to the maximum possible value
    min1 = min2 = INT_MAX;

    // Iterate through the array to find the first and second minimum elements
    for (i = 0; i < n; i++) {
        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2 && arr[i] != min1) {
            min2 = arr[i];
        }
    }

    // Check if the second minimum element was found
    if (min2 == INT_MAX) {
        printf("There is no second minimum element in the array.\n");
    } else {
        // Printing the first and second minimum elements
        printf("The first minimum element is: %d\n", min1);
        printf("The second minimum element is: %d\n", min2);
    }

    return 0;
}
