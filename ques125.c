/*Open an existing file in append mode and allow the user to enter a new line of text.
 Append the text at the end without overwriting existing content.*/

 #include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char text[200];

    // Get file name from user
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open file in append mode
    fp = fopen(filename, "a");   // "a" → append only, "a+" → append + read
    if (fp == NULL) {
        printf("Error: Cannot open file!\n");
        return 1;
    }

    // Clear input buffer
    getchar();

    // Get new line of text from the user
    printf("Enter the text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append to file
    fputs(text, fp);

    printf("Text appended successfully.\n");

    fclose(fp);
    return 0;
}
