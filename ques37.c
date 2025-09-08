/*🔁
Q37 (Loops without Arrays/Strings)
Write a program to find the LCM of two numbers.*/

#include <stdio.h>

int main() {
    int a, b, gcd, lcm, i;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Find GCD (HCF) using loop
    gcd = 1;
    for (i = 1; i <= a && i <= b; i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;   // store greatest common divisor
        }
    }

    // LCM formula
    lcm = (a * b) / gcd;

    printf("LCM of %d and %d is %d\n", a, b, lcm);

    return 0;
}
