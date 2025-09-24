/*  
Q65 (Arrays (1D))  
Search in a sorted array using binary search  
*/

#include <stdio.h>

int main() {
    int n, key, i, low, high, mid;
    
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements in sorted order: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;
    int found = 0;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            printf("Element %d found at position %d (index %d).\n", key, mid + 1, mid);
            found = 1;
            break;
        }
        else if (arr[mid] < key) {
            low = mid + 1; // search in right half
        }
        else {
            high = mid - 1; // search in left half
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
