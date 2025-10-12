// Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character
    str[strcspn(str, "\n")] = 0;

    char *word_start = NULL;
    char *temp = str;

    while (*temp) {
        if (word_start == NULL && *temp != ' ') {
            word_start = temp;
        }
        if (word_start && (*temp == ' ' || *(temp + 1) == '\0')) {
            reverseWord(word_start, (*temp == ' ') ? temp - 1 : temp);
            word_start = NULL;
        }
        temp++;
    }

    printf("Reversed sentence: %s\n", str);
    return 0;
}