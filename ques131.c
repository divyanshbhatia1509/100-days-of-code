// Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.
#include <stdio.h>
enum Day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    for (enum Day d = SUNDAY; d <= SATURDAY; d++) {
        printf("Day %d\n", d);
    }
    return 0;
}
