#include <stdio.h>

int roll[20];
char name[20][30];
float marks[20];
int total = 0;

void addStudent()
{
    printf("\nEnter Roll Number: ");
    scanf("%d", &roll[total]);

    printf("Enter Name: ");
    scanf("%s", name[total]);

    printf("Enter Marks: ");
    scanf("%f", &marks[total]);

    total++;
}

void showStudents()
{
    int i;

    if(total == 0)
    {
        printf("\nNo Records Found.\n");
        return;
    }

    printf("\n------ Student Records ------\n");

    for(i = 0; i < total; i++)
    {
        printf("\nRoll No : %d\n", roll[i]);
        printf("Name    : %s\n", name[i]);
        printf("Marks   : %.2f\n", marks[i]);
    }
}

void searchStudent()
{
    int r, i, found = 0;

    printf("Enter Roll Number to Search: ");
    scanf("%d", &r);

    for(i = 0; i < total; i++)
    {
        if(roll[i] == r)
        {
            printf("\nRecord Found\n");
            printf("Roll No : %d\n", roll[i]);
            printf("Name    : %s\n", name[i]);
            printf("Marks   : %.2f\n", marks[i]);

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Record Not Found.\n");
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n===== Student Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                showStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                printf("Program Closed.\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while(choice != 4);

    return 0;
}