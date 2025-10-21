/*Write a program to take an integer array arr as input. The task is to find the maximum sum of
 any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all 
 elements are negative, print the largest (least negative) element.*/

 #include <stdio.h>

int main() {
    int n;

    // Input array size
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Kadane’s Algorithm initialization
    int max_sum = arr[0];   // Maximum sum so far
    int current_sum = arr[0]; // Current subarray sum

    // Traverse the array
    for (int i = 1; i < n; i++) {
        // Either start a new subarray or continue the current one
        if (current_sum + arr[i] > arr[i])
            current_sum += arr[i];
        else
            current_sum = arr[i];

        // Update max_sum if needed
        if (current_sum > max_sum)
            max_sum = current_sum;
    }

    // Output the result
    printf("Maximum subarray sum: %d\n", max_sum);

    return 0;
}
