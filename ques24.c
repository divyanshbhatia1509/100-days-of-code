/* Write a program to calculate electricity bill based on units consumed with these rates:
First 100 units at ₹5/unit
Next 100 units at ₹7/unit
Next 100 units at ₹10/unit
Above at ₹12/unit
*/

#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units > 300) {
        bill += (units - 300) * 12;
        units = 300;
    }
    if (units > 200) {
        bill += (units - 200) * 10;
        units = 200;
    }
    if (units > 100) {
        bill += (units - 100) * 7;
        units = 100;
    }
    bill += units * 5;

    printf("Total bill: ₹%.2f\n", bill);
    return 0;
}