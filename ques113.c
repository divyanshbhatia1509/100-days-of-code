/*Write a program to take an integer array arr and an integer k as inputs. The task is to
 find the kth smallest element in the array. Print the kth smallest element as output.
*/

#include <stdio.h>

// Function to sort array using simple Bubble Sort
void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, k;

    // Input array size
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input k
    printf("Enter value of k: ");
    scanf("%d", &k);

    // Validate k
    if (k < 1 || k > n) {
        printf("Invalid value of k.\n");
        return 0;
    }

    // Sort the array
    sortArray(arr, n);

    // Print kth smallest element (1-based indexing)
    printf("The %dth smallest element is: %d\n", k, arr[k - 1]);

    return 0;
}
