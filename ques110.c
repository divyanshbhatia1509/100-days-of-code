/*Write a program to take an integer array arr and an integer k as inputs. The task is to 
find the maximum element in each subarray of size k moving from left to right. Print the maximum
 elements for each window separated by spaces as output.*/

 #include <stdio.h>

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

    // Input window size k
    printf("Enter subarray size k: ");
    scanf("%d", &k);

    // Validate window size
    if (k > n || k <= 0) {
        printf("Invalid subarray size.\n");
        return 0;
    }

    printf("Maximum elements in each subarray of size %d: ", k);

    // Brute-force approach: check each subarray of size k
    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];

        // Find maximum in current window
        for (int j = i + 1; j < i + k; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }

        // Print maximum for current window
        printf("%d ", max);
    }

    printf("\n");
    return 0;
}
