#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i, j;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("Common characters are: ");

    for(i = 0; str1[i] != '\0'; i++)
    {
        int found = 0;

        for(j = 0; str2[j] != '\0'; j++)
        {
            if(str1[i] == str2[j])
            {
                found = 1;
                break;
            }
        }

        if(found)
        {
            int repeat = 0;

            for(j = 0; j < i; j++)
            {
                if(str1[i] == str1[j])
                {
                    repeat = 1;
                    break;
                }
            }

            if(!repeat)
            {
                printf("%c ", str1[i]);
            }
        }
    }

    return 0;
}