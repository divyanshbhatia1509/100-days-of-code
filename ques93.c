// Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq[256] = {0};  // Frequency array for all ASCII characters

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    // If lengths are different, they cannot be anagrams
    if (strlen(str1) != strlen(str2)) {
        printf("Not anagrams\n");
        return 0;
    }

    // Count frequency of each character in both strings
    for (int i = 0; i < strlen(str1); i++) {
        freq[(unsigned char)str1[i]]++;
        freq[(unsigned char)str2[i]]--;
    }

    // Check if all frequencies are zero
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("Not anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");
    return 0;
}
