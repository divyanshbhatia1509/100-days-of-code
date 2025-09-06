// Write a program to calculate the factorial of a number.

#include <stdio.h>

int main() {
    int n, i, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of negative numbers is not defined.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorial = factorial * i;
        }
        printf("Factorial of %d = %d\n", n, factorial);
    }

    return 0;
}