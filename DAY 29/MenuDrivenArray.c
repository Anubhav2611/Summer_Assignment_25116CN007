#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int choice;
    int sum, max, min;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\n===== Array Operations =====\n");
        printf("1. Display Array\n");
        printf("2. Find Sum\n");
        printf("3. Find Maximum\n");
        printf("4. Find Minimum\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Array Elements: ");
                for(i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 2:
                sum = 0;
                for(i = 0; i < n; i++)
                {
                    sum = sum + arr[i];
                }
                printf("Sum = %d\n", sum);
                break;

            case 3:
                max = arr[0];
                for(i = 1; i < n; i++)
                {
                    if(arr[i] > max)
                    {
                        max = arr[i];
                    }
                }
                printf("Maximum Element = %d\n", max);
                break;

            case 4:
                min = arr[0];
                for(i = 1; i < n; i++)
                {
                    if(arr[i] < min)
                    {
                        min = arr[i];
                    }
                }
                printf("Minimum Element = %d\n", min);
                break;

            case 5:
                printf("Program Ended.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}