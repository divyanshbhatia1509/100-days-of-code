/*Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
*/

#include <stdio.h>

int main() {
    int m, n;
    int arr1[100], arr2[100], merged[200];
    int i = 0, j = 0, k = 0;

    // Input size and elements of first array
    scanf("%d", &m);
    for (i = 0; i < m; i++)
        scanf("%d", &arr1[i]);

    // Input size and elements of second array
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr2[i]);

    i = 0; j = 0; k = 0;

    // Merge the two sorted arrays
    while (i < m && j < n) {
        if (arr1[i] <= arr2[j])
            merged[k++] = arr1[i++];
        else
            merged[k++] = arr2[j++];
    }

    // Copy remaining elements
    while (i < m)
        merged[k++] = arr1[i++];
    while (j < n)
        merged[k++] = arr2[j++];

    // Print merged array
    for (i = 0; i < m + n; i++)
        printf("%d ", merged[i]);

    return 0;
}
