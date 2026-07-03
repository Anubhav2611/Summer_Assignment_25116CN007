#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float basicSalary;
    float bonus;
    float totalSalary;
};

int main()
{
    struct Employee emp[50];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter Employee Name: ");
        scanf("%s", emp[i].name);

        printf("Enter Basic Salary: ");
        scanf("%f", &emp[i].basicSalary);

        printf("Enter Bonus: ");
        scanf("%f", &emp[i].bonus);

        emp[i].totalSalary = emp[i].basicSalary + emp[i].bonus;
    }

    printf("\n------ Salary Details ------\n");

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee ID   : %d\n", emp[i].id);
        printf("Name          : %s\n", emp[i].name);
        printf("Basic Salary  : %.2f\n", emp[i].basicSalary);
        printf("Bonus         : %.2f\n", emp[i].bonus);
        printf("Total Salary  : %.2f\n", emp[i].totalSalary);
    }

    return 0;
}