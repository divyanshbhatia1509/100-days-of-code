/*Write a program to take an input array of size n. The array should contain
 all the integers between 0 to n except for one. Print that missing number
*/

#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers between 0 and %d (one missing):\n", n, n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int total = n * (n + 1) / 2; // sum of 0 to n
    int missing = total - sum;

    printf("The missing number is: %d\n", missing);
    return 0;
}
