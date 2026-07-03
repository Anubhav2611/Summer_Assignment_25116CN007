#include <stdio.h>

struct Book
{
    int bookId;
    char bookName[50];
    char author[50];
};

int main()
{
    struct Book b[50];
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &b[i].bookId);

        printf("Enter Book Name: ");
        scanf("%s", b[i].bookName);

        printf("Enter Author Name: ");
        scanf("%s", b[i].author);
    }

    printf("\n====== Library Records ======\n");

    for(i = 0; i < n; i++)
    {
        printf("\nBook ID     : %d\n", b[i].bookId);
        printf("Book Name   : %s\n", b[i].bookName);
        printf("Author Name : %s\n", b[i].author);
    }

    return 0;
}