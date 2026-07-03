#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100], temp[100];
    int choice, i;

    printf("Enter a string: ");
    scanf("%s", str);

    do
    {
        printf("\n===== String Operations =====\n");
        printf("1. Find Length\n");
        printf("2. Reverse String\n");
        printf("3. Convert to Uppercase\n");
        printf("4. Convert to Lowercase\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Length = %d\n", strlen(str));
                break;

            case 2:
                strcpy(temp, str);

                for(i = strlen(temp) - 1; i >= 0; i--)
                {
                    printf("%c", temp[i]);
                }

                printf("\n");
                break;

            case 3:
                strcpy(temp, str);

                for(i = 0; temp[i] != '\0'; i++)
                {
                    temp[i] = toupper(temp[i]);
                }

                printf("Uppercase: %s\n", temp);
                break;

            case 4:
                strcpy(temp, str);

                for(i = 0; temp[i] != '\0'; i++)
                {
                    temp[i] = tolower(temp[i]);
                }

                printf("Lowercase: %s\n", temp);
                break;

            case 5:
                printf("Program Closed.\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while(choice != 5);

    return 0;
}