#include <stdio.h>

struct Employee
{
    int empId;
    char name[30];
    char department[30];
    float salary;
};

int main()
{
    struct Employee e[20];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &e[i].empId);

        printf("Enter Employee Name: ");
        scanf("%s", e[i].name);

        printf("Enter Department: ");
        scanf("%s", e[i].department);

        printf("Enter Salary: ");
        scanf("%f", &e[i].salary);
    }

    printf("\n------ Employee Records ------\n");

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee ID : %d\n", e[i].empId);
        printf("Name        : %s\n", e[i].name);
        printf("Department  : %s\n", e[i].department);
        printf("Salary      : %.2f\n", e[i].salary);
    }

    return 0;
}
