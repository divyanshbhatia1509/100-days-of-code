/*Q39 (Loops without Arrays/Strings)
Write a program to find the product of odd digits of a number.*/

#include <stdio.h>

int main() {
    int num, digit, product = 1;
    int hasOdd = 0;   // flag to check if odd digit exists

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;       // extract last digit
        if (digit % 2 != 0) {   // check if odd
            product = product * digit;
            hasOdd = 1;
        }
        num = num / 10;         // remove last digit
    }

    if (hasOdd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits found!\n");

    return 0;
}
