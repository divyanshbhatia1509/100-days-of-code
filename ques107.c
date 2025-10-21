/*Write a program to take an array arr[] of integers as input, the task is to find the previous 
greater element for each element of the array in order of their appearance in the array. Previous 
greater element of an element in the array is the nearest element on the left which is greater than
 the current element. If there does not exist next greater of current element, then previous greater
  element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.*/

#include <stdio.h>

int main() {
    int n;

    // Input size of array
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements of array
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Previous Greater Elements: ");

    // Brute-force approach
    for (int i = 0; i < n; i++) {
        int prev = -1;  // Default value if no greater element is found

        // Search on the left side (from i-1 down to 0)
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev = arr[j];
                break;  // Stop when first greater element is found
            }
        }

        // Print with commas except for last element
        if (i == n - 1)
            printf("%d", prev);
        else
            printf("%d, ", prev);
    }

    printf("\n");
    return 0;
}
