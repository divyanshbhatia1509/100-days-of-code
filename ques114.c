/*Write a program to take a string s as input. The task is to find the length of the longest
 substring without repeating characters. Print the length as output.
🖥️*/


#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int lastIndex[256];  // To store last index of every character
    int maxLen = 0, start = 0;

    printf("Enter a string: ");
    scanf("%s", s);

    // Initialize all characters' last index as -1
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    for (int end = 0; s[end] != '\0'; end++) {
        if (lastIndex[(unsigned char)s[end]] >= start) {
            // Move start to the right of last occurrence
            start = lastIndex[(unsigned char)s[end]] + 1;
        }
        lastIndex[(unsigned char)s[end]] = end;  // Update last seen index
        if (end - start + 1 > maxLen)
            maxLen = end - start + 1;  // Update maximum length
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);

    return 0;
}
