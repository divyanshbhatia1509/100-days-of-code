/*Write a program to take an integer array nums of size n, and print the majority element.
 The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1
  if no such element exists. Note: Majority Element is not necessarily the element that is
   present most number of times.*/

#include <stdio.h>

int findMajorityElement(int nums[], int n) {
    int candidate = -1, count = 0;

    // Phase 1: Find candidate
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
        }
        count += (nums[i] == candidate) ? 1 : -1;
    }

    // Phase 2: Verify if candidate is the majority element
    count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }

    // If the candidate appears more than n / 2 times, it's the majority element
    if (count > n / 2) {
        return candidate;
    } else {
        return -1;
    }
}

int main() {
    int n;

    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int nums[n];

    // Input elements of the array
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Find and print the majority element
    int result = findMajorityElement(nums, n);
    if (result != -1) {
        printf("The majority element is: %d\n", result);
    } else {
        printf("No majority element found.\n");
    }

    return 0;
}
