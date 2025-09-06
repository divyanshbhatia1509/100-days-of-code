// Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main() {
    int num, i;
    int binary[32];  // Array to store binary representation
    printf("Enter a number: ");
    scanf("%d", &num);

    // Convert to binary
    for (i = 0; num > 0; i++) {
        binary[i] = num % 2;
        num = num / 2;
    }

    // Print binary representation
    printf("Binary representation: ");
    for (i = i - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}
