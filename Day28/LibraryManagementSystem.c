#include <stdio.h>

struct Library
{
    int bookId;
    char bookName[50];
    char author[50];
};

int main()
{
    struct Library b;

    printf("Enter Book ID: ");
    scanf("%d", &b.bookId);

    printf("Enter Book Name: ");
    scanf(" %[^\n]", b.bookName);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", b.author);

    printf("\n Book Details-:\n");
    printf("Book ID      : %d\n", b.bookId);
    printf("Book Name    : %s\n", b.bookName);
    printf("Author       : %s\n", b.author);

    return 0;
}