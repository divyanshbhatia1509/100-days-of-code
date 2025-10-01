/*Q84 (Strings)
Convert a lowercase string to uppercase without using built-in functions.
*/


#include <stdio.h>

int main() {
    char s[200];
    int i;

    printf("Enter a string: ");
    scanf("%[^\n]", s);   // reads a full line (until newline)

    for (i = 0; s[i] != '\0'; ++i) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;   // 'a' (97) -> 'A' (65)
        }
    }

    printf("Uppercase: %s\n", s);
    return 0;
}
