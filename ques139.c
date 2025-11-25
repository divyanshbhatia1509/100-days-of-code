// Show that enums store integers by printing assigned values.
#include <stdio.h>

enum Status {
    SUCCESS = 0,
    FAILURE = 1,
    PENDING = 2
};

int main() {
    enum Status currentStatus = SUCCESS;
    printf("SUCCESS = %d\n", currentStatus);

    currentStatus = FAILURE;
    printf("FAILURE = %d\n", currentStatus);

    currentStatus = PENDING;
    printf("PENDING = %d\n", currentStatus);

    return 0;
}