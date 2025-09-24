/*
Q66 (Arrays (1D))
Insert an element in a sorted array at the appropriate position.
*/

#include <stdio.h>

int main() {
    int n, i, pos, value;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[100]; // max size assumed = 100

    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &value);

    // Step 1: Find the correct position
    pos = n; // assume at end
    for (i = 0; i < n; i++) {
        if (value < arr[i]) {
            pos = i;
            break;
        }
    }

    // Step 2: Shift elements to make space
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Step 3: Insert the element
    arr[pos] = value;
    n++;

    // Step 4: Print final array
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
