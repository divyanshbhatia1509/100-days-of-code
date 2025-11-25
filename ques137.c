// Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>

enum UserRole {
    ADMIN,
    USER,
    GUEST
};

void displayMessage(enum UserRole role) {
    switch (role) {
        case ADMIN:
            printf("Welcome, Admin!\n");
            break;
        case USER:
            printf("Welcome, User!\n");
            break;
        case GUEST:
            printf("Welcome, Guest!\n");
            break;
        default:
            printf("Unknown role.\n");
    }
}

int main() {
    enum UserRole currentUser = ADMIN;
    displayMessage(currentUser);

    currentUser = USER;
    displayMessage(currentUser);

    currentUser = GUEST;
    displayMessage(currentUser);

    return 0;
}