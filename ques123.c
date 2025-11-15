/*Read a text file and count the total number of characters, words, and lines.
 A word is defined as a sequence of non-space characters separated by spaces or 
 newlines.*/

 #include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[100], ch;
    int chars = 0, words = 0, lines = 0;
    int inWord = 0;  // Flag to detect if we're inside a word

    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;  // Count characters

        if (ch == '\n')
            lines++;  // Count lines

        if (ch == ' ' || ch == '\n' || ch == '\t') {
            // We are leaving a word
            inWord = 0;
        } else {
            // We are inside a word
            if (inWord == 0) {
                words++;    // New word found
                inWord = 1; // Set flag
            }
        }
    }

    fclose(fp);

    // If file is not empty but doesn't end with newline, count last line
    if (chars > 0 && ch != '\n')
        lines++;

    printf("Total Characters: %d\n", chars);
    printf("Total Words: %d\n", words);
    printf("Total Lines: %d\n", lines);

    return 0;
}
