//Q86: Check if a string is a palindrome

#include <stdio.h>

int main() {
    char str[100];
    int i, j, flag = 1;  // flag = 1 means palindrome

    printf("Enter a string: ");
    scanf("%s", str);   // input (no spaces)

    // find length
    int len = 0;
    for (i = 0; str[i] != '\0'; i++) {
        len++;
    }

    // check palindrome
    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("Palindrome\n");
    else
        printf("Not a Palindrome\n");

    return 0;
}
