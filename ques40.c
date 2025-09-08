/*🔁
Q40 (Loops without Arrays/Strings)
Write a program to find the 1’s complement of a binary number and print it.*/

#include <stdio.h>

int main() {
    long long bin, onesComp = 0;
    int digit, place = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &bin);

    while (bin > 0) {
        digit = bin % 10;      // extract last digit
        if (digit == 0)
            digit = 1;         // flip 0 → 1
        else
            digit = 0;         // flip 1 → 0

        onesComp = onesComp + digit * place;
        place = place * 10;    // move to next position
        bin = bin / 10;        // remove last digit
    }

    printf("1's complement = %lld\n", onesComp);

    return 0;
}
