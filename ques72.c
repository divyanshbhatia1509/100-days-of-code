/*
Q72 (2D Arrays)
Find the sum of all elements in a matrix.
*/

#include <stdio.h>

int main() {
    int rows, cols, i, j, sum = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[100][100]; // assuming max size = 100x100

    // Read the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j]; // add element to sum
        }
    }

    printf("The sum of all elements in the matrix is: %d\n", sum);

    return 0;
}
