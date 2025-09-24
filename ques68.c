/*
Q68 (Arrays (1D))
Delete an element from an array.
*/

#include <stdio.h>

int main() {
    int n, i, pos;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[100]; // assuming maximum size = 100

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position of the element to delete (1 to %d): ", n);
    scanf("%d", &pos);

    if (pos < 1 || pos > n) {
        printf("Invalid position!\n");
    } else {
        // Shift elements to the left
        for (i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;

        printf("Array after deletion:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
