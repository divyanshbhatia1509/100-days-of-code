/*
Find the second largest element in an array.
*/

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must have at least 2 elements.\n");
        return 0;
    }

    int arr[100];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int secondLargest = -2147483648; // minimum int

    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == -2147483648) {
        printf("No second largest element (all elements are equal).\n");
    } else {
        printf("The second largest element is: %d\n", secondLargest);
    }

    return 0;
}
