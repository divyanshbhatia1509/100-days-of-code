/*Q61 (Arrays (1D))
Search for an element in an array using linear search.*/

#include <stdio.h>

int main() {
    int arr[100], n, i, key, found = 0;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Element %d found at position %d\n", key, i+1);  
            found = 1;
            break; 
        }
    }

    if(found==0) {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
