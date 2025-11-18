/*Take two filenames from the user – a source file and a destination file.
 Copy all the content from the source file to the destination file using fgetc()
  and fputc().*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char src_name[1024];
    char dst_name[1024];

    printf("Enter source filename: ");
    if (fgets(src_name, sizeof(src_name), stdin) == NULL) {
        fprintf(stderr, "Failed to read source filename.\n");
        return 1;
    }
    printf("Enter destination filename: ");
    if (fgets(dst_name, sizeof(dst_name), stdin) == NULL) {
        fprintf(stderr, "Failed to read destination filename.\n");
        return 1;
    }

    /* remove trailing newline from fgets */
    src_name[strcspn(src_name, "\n")] = '\0';
    dst_name[strcspn(dst_name, "\n")] = '\0';

    if (strlen(src_name) == 0 || strlen(dst_name) == 0) {
        fprintf(stderr, "Filename cannot be empty.\n");
        return 1;
    }

    if (strcmp(src_name, dst_name) == 0) {
        fprintf(stderr, "Source and destination filenames are the same. Copy would overwrite source.\n");
        return 1;
    }

    FILE *src = fopen(src_name, "rb");
    if (src == NULL) {
        perror("Error opening source file");
        return 1;
    }

    FILE *dst = fopen(dst_name, "wb");
    if (dst == NULL) {
        perror("Error opening destination file");
        fclose(src);
        return 1;
    }

    int ch;
    size_t written = 0;
    size_t read = 0;

    while ((ch = fgetc(src)) != EOF) {
        read++;
        if (fputc(ch, dst) == EOF) {
            perror("Error writing to destination file");
            fclose(src);
            fclose(dst);
            return 1;
        }
        written++;
    }

    if (ferror(src)) {
        perror("Error reading source file");
        fclose(src);
        fclose(dst);
        return 1;
    }

    fclose(src);
    if (fclose(dst) == EOF) {
        perror("Error closing destination file");
        return 1;
    }

    printf("Copied %zu bytes from '%s' to '%s'.\n", written, src_name, dst_name);
    return 0;
}
