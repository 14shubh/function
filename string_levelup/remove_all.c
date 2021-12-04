// •	Remove all repeated characters from a given string.

#include <stdio.h>
#include <string.h>

char remove(char str[])
{
    int i, j, k;
    for (i = 0; i < strlen(str); i++)
    {
        for (j = i + 1; str[j] != '\0'; j++)
        {
            if (str[j] == str[i])
            {
                for (k = j; str[k] != '\0'; k++)
                {
                    str[k] = str[k + 1];
                }
            }
        }
    }

    printf("after Removing All Duplicates = %s ", str);
}
int main()
{
    char str[100];

    printf("Enter any String :  ");
    gets(str);

    remove(str);

    return 0;
}