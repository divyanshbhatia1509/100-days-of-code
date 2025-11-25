// Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>
struct Book {
    char title[100];
    char author[50];
    int pages;
};
void printBookDetails(struct Book b) {
    printf("Title: %s", b.title);
    printf("Author: %s", b.author);
    printf("Pages: %d\n", b.pages);
}
int main() {
    struct Book myBook;

    printf("Enter book title: ");
    fgets(myBook.title, sizeof(myBook.title), stdin);

    printf("Enter book author: ");
    fgets(myBook.author, sizeof(myBook.author), stdin);

    printf("Enter number of pages: ");
    scanf("%d", &myBook.pages);

    printf("\nBook Details:\n");
    printBookDetails(myBook);

    return 0;
}