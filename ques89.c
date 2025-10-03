//Q88: Replace spaces with hyphens in a string

#include <stdio.h>

int main() {
    char str[200], ch;
    int i, count = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);   // read input with spaces

    getchar(); // to consume the newline left by scanf

    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch)
            count++;
    }

    printf("Frequency of '%c' = %d\n", ch, count);

    return 0;
}
