// Print the initials of a name.
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline character
    name[strcspn(name, "\n")] = 0;

    printf("Initials: ");
    for (int i = 0; i < strlen(name); i++) {
        if (i == 0 || name[i - 1] == ' ') {
            printf("%c. ", name[i]);
        }
    }
    printf("\n");
    return 0;
}