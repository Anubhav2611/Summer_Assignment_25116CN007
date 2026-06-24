#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i, count1[256] = {0}, count2[256] = {0};
    int flag = 1;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    for(i = 0; str1[i] != '\0'; i++)
    {
        count1[str1[i]]++;
    }

    for(i = 0; str2[i] != '\0'; i++)
    {
        count2[str2[i]]++;
    }

    for(i = 0; i < 256; i++)
    {
        if(count1[i] != count2[i])
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("Strings are Anagrams");
    else
        printf("Strings are Not Anagrams");

    return 0;
}
