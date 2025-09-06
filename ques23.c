/* Write a program to calculate library fine based on late days as follows:
First 5 days late: ₹2/day
Next 5 days late: ₹4/day
Next 20 days days late: ₹6/day
More than 30 days: Membership Cancelled
*/

#include <stdio.h>

int main() {
    int late_days;
    float fine = 0;

    printf("Enter the number of late days: ");
    scanf("%d", &late_days);

    if (late_days > 30) {
        printf("Membership Cancelled\n");
    } else if (late_days > 25) {
        fine += (late_days - 25) * 6;
        late_days = 25;
    } else if (late_days > 20) {
        fine += (late_days - 20) * 4;
        late_days = 20;
    } else if (late_days > 5) {
        fine += (late_days - 5) * 2;
        late_days = 5;
    }

    fine += late_days * 2;

    printf("Total fine: ₹%.2f\n", fine);
    return 0;
}