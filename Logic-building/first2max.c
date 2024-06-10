#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;
    int max1, max2;

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
    max1 = max2 = INT_MAX;

    // Iterate through the array to find the first and second minimum elements
    for (i = 0; i < n; i++) {
        if (arr[i] < max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] < max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    // Check if the second minimum element was found
    if (max2 == INT_MAX) {
        printf("There is no second minimum element in the array.\n");
    } else {
        // Printing the first and second minimum elements
        printf("The first minimum element is: %d\n", max1);
        printf("The second minimum element is: %d\n", max2);
    }

    return 0;
}
