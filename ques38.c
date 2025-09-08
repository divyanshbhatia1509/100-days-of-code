/*🔁
Q38 (Loops without Arrays/Strings)
Write a program to find the sum of digits of a number*/


#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;   // extract last digit
        sum = sum + digit;  // add digit to sum
        num = num / 10;     // remove last digit
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
