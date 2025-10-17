/*/*Write a Program to take a sorted array arr[] and an integer x as input, 
find the index (0-based) of the smallest element in arr[] that is greater than
 or equal to x and print it. This element is called the ceil of x. If such an 
 element does not exist, print -1. Note: In case of multiple occurrences of ceil 
 of x, return the index of the first occurrence. */

#include <stdio.h>

int main() {
    int arr[100];
    int n, x, i, ceilIndex = -1;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements of the sorted array: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target element: ");
    scanf("%d", &x);

    // Find ceil index
    for (i = 0; i < n; i++) {
        if (arr[i] >= x) {
            ceilIndex = i;
            break; // Stop at first element >= x
        }
    }

    if (ceilIndex != -1)
        printf("Ceil of %d is at index: %d\n", x, ceilIndex);
    else
        printf("Ceil of %d does not exist in the array.\n", x);

    return 0;
}
