/*Write a program to take an integer array arr and an integer k as inputs. Print the 
maximum sum of all the subarrays of size k.*/

#include <stdio.h>

int main() {
    int n, k;

    // Input size of array
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input k
    printf("Enter subarray size k: ");
    scanf("%d", &k);

    // Check if k is valid
    if (k > n || k <= 0) {
        printf("Invalid subarray size.\n");
        return 0;
    }

    // Step 1: Compute sum of first window of size k
    int window_sum = 0;
    for (int i = 0; i < k; i++) {
        window_sum += arr[i];
    }

    int max_sum = window_sum;

    // Step 2: Slide the window through the array
    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k];  // Add new element, remove old
        if (window_sum > max_sum) {
            max_sum = window_sum;
        }
    }

    // Output the result
    printf("Maximum sum of subarray of size %d: %d\n", k, max_sum);

    return 0;
}
