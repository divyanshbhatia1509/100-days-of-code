// Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    char *word = strtok(str, " ");
    char *longest = word;

    while (word != NULL) {
        if (strlen(word) > strlen(longest)) {
            longest = word;
        }
        word = strtok(NULL, " ");
    }

    printf("Longest word: %s\n", longest);
    return 0;
}