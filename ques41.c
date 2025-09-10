// Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, digits = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10;

    temp = num;
    while (temp >= 10) {
        temp /= 10;
        digits++;
    }
    firstDigit = temp;

    num = lastDigit * pow(10, digits) + num % (int)pow(10, digits) / 10 * 10 + firstDigit;

    printf("Number after swapping first and last digit: %d\n", num);

    return 0;
}