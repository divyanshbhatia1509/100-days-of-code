/* 
   Write a Program to take an array of integers as input, calculate the pivot index of this array.
   The pivot index is the index where the sum of all the numbers strictly to the left of the index 
   is equal to the sum of all the numbers strictly to the index's right. 
   If no such index exists, print -1.
*/

#include <stdio.h>

int main() {
    int arr[100];
    int n, i;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int leftSum = 0, rightSum = 0;
    int pivotIndex = -1;

    // Compute total sum (which will be used as right sum)
    for (i = 0; i < n; i++) {
        rightSum += arr[i];
    }

    // Traverse and find pivot
    for (i = 0; i < n; i++) {
        rightSum -= arr[i]; // remove current element from right sum

        if (leftSum == rightSum) {
            pivotIndex = i;
            break; // leftmost pivot found
        }

        leftSum += arr[i]; // add current element to left sum
    }

    printf("Leftmost pivot index: %d\n", pivotIndex);

    return 0;
}
