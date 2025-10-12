// Print all sub-strings of a string.

#include <stdio.h>
#include <string.h>
#define MAX_LEN 100

int main() {
    char str[MAX_LEN];
    printf("Enter a string: ");
    fgets(str, MAX_LEN, stdin);
    str[strcspn(str, "\n")] = 0;  

    int len = strlen(str);
    printf("All substrings of the string are:\n");
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j <= len; j++) {
            char substr[MAX_LEN];
            strncpy(substr, str + i, j - i);
            substr[j - i] = '\0';  
            printf("%s\n", substr);
        }
    }
    return 0;
}