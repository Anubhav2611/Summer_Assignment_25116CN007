#include <stdio.h>

struct Contact
{
    char name[50];
    char mobile[15];
};

int main()
{
    struct Contact list[50];
    int n, i;

    printf("Enter number of contacts: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nContact %d\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", list[i].name);

        printf("Enter Mobile Number: ");
        scanf("%s", list[i].mobile);
    }

    printf("\n----- Contact List -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nName   : %s\n", list[i].name);
        printf("Mobile : %s\n", list[i].mobile);
    }

    return 0;
}