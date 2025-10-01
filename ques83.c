/*
Q83 (Strings)
Count vowels and consonants in a string.
Input 1:
hello
Output 1:
Vowels=2, Consonants=3*/


#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, i;

    printf("Enter a string: ");
    scanf("%[^\n]", str);   // read string with spaces until newline

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
                ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);
    return 0;
}
