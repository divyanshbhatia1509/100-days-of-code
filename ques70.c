/*
Q70 (Arrays (1D))
Rotate an array to the right by k positions.
*/

#include <stdio.h>

int main() {
    int n, k, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[100];  // assuming max size = 100

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate (k): ");
    scanf("%d", &k);

    // Normalize k (in case k > n)
    k = k % n;

    int rotated[100];
    int index = 0;

    // Copy last k elements to the front
    for (i = n - k; i < n; i++) {
        rotated[index++] = arr[i];
    }

    // Copy remaining elements
    for (i = 0; i < n - k; i++) {
        rotated[index++] = arr[i];
    }

    // Print rotated array
    printf("Array after rotation:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }
    printf("\n");

    return 0;
}
