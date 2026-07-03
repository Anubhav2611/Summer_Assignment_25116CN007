#include <stdio.h>

int main()
{
    int roll[50];
    char name[50][30];
    float marks[50];
    int totalStudents, i;

    printf("Enter number of students: ");
    scanf("%d", &totalStudents);

    for(i = 0; i < totalStudents; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
    }

    printf("\n===== Student Records =====\n");

    for(i = 0; i < totalStudents; i++)
    {
        printf("\nRoll No : %d\n", roll[i]);
        printf("Name    : %s\n", name[i]);
        printf("Marks   : %.2f\n", marks[i]);
    }

    return 0;
}