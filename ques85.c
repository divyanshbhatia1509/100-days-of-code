/*Q85: Reverse a string*/


#include <stdio.h>

int main() {
    char str[100], rev[100];
    int i, j, len = 0;

    printf("Enter a string: ");
    scanf("%s", str);  // takes input (without spaces)

    // find length
    for (i = 0; str[i] != '\0'; i++) {
        len++;
    }

    // reverse logic
    for (i = 0, j = len - 1; j >= 0; i++, j--) {
        rev[i] = str[j];
    }
    rev[i] = '\0';

    printf("Reversed string: %s\n", rev);

    return 0;
}
