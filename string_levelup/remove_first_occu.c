// •	Remove the first occurrence of a character from a string.

#include <stdio.h>
#include <string.h>

char remove(char str[], char ch)
{
    int i = 0, len;

    len = strlen(str);

    while (i < len && str[i] != ch)
    {
        i++;
    }

    while (i < len)
    {
        str[i] = str[i + 1];
        i++;
    }
    printf("after Removing First occurrence of '%c' = %s ", ch, str);
}
int main()
{
    char str[100], ch;

    printf("Enter any String :  ");
    gets(str);

    printf("Enter the Character that you want to Remove :  ");
    scanf("%c", &ch);

    remove(str, ch);
    return 0;
}