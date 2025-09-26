/*Q76 (2D Arrays)
Check if a matrix is symmetric*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[50][50];
    int i, j, flag = 1;

    // Input matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check symmetry
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1)
        printf("The matrix is Symmetric.\n");
    else
        printf("The matrix is NOT Symmetric.\n");

    return 0;
}
