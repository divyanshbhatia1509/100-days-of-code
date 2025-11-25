// Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include <stdio.h>
enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};
int main() {
    enum Status currentStatus;

    // Example usage
    currentStatus = SUCCESS;
    if (currentStatus == SUCCESS) {
        printf("Operation completed successfully.\n");
    } else if (currentStatus == FAILURE) {
        printf("Operation failed.\n");
    } else if (currentStatus == TIMEOUT) {
        printf("Operation timed out.\n");
    }

    currentStatus = FAILURE;
    if (currentStatus == SUCCESS) {
        printf("Operation completed successfully.\n");
    } else if (currentStatus == FAILURE) {
        printf("Operation failed.\n");
    } else if (currentStatus == TIMEOUT) {
        printf("Operation timed out.\n");
    }

    currentStatus = TIMEOUT;
    if (currentStatus == SUCCESS) {
        printf("Operation completed successfully.\n");
    } else if (currentStatus == FAILURE) {
        printf("Operation failed.\n");
    } else if (currentStatus == TIMEOUT) {
        printf("Operation timed out.\n");
    }

    return 0;
}
