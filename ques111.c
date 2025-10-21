/*Write a program to take an integer array arr and an integer k as inputs. The task is to find 
the first negative integer in each subarray of size k moving from left to right. If no negative 
exists in a window, print "0" for that window. Print the results separated by spaces as output*/

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

    // Input window size k
    printf("Enter subarray size k: ");
    scanf("%d", &k);

    // Validate window size
    if (k > n || k <= 0) {
        printf("Invalid subarray size.\n");
        return 0;
    }

    printf("First negative integer in each subarray of size %d: ", k);

    // Brute-force approach
    for (int i = 0; i <= n - k; i++) {
        int firstNegative = 0; // Default to 0 if no negative found

        // Check elements in current window
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                firstNegative = arr[j];
                break;  // Stop at first negative
            }
        }

        printf("%d ", firstNegative);
    }

    printf("\n");
    return 0;
}
