/*
Q64 (Arrays (1D))
Find the digit that occurs the most times in an integer number (using int).
*/

#include <stdio.h>

int main() {
    int num, digit, i;
    int count[10] = {0}; // frequency of digits 0-9

    printf("Enter an integer number: ");
    scanf("%d", &num);

    // Make number positive
    if (num < 0) {
        num = -num;
    }

    // Count digits
    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Find digit with maximum frequency
    int maxCount = count[0];
    int maxDigit = 0;
    for (i = 1; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("The digit that occurs the most is %d (appears %d times).\n", maxDigit, maxCount);

    return 0;
}
