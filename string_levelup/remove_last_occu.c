// •	Remove the last occurrence of a character from a string.

#include <stdio.h>
#include <string.h>

char remove(char str[], char ch)
{
    int i, index, len;
    index = -1;

    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        if (str[i] == ch)
        {
            index = i;
        }
    }
    if (index != -1)
    {
        i = index;

        while (i < len)
        {
            str[i] = str[i + 1];
            i++;
        }
    }

    printf("after Removing Last Occurrence of '%c' = %s ", ch, str);
}
int main()
{
    char str[100], ch;

    printf("Enter any String :  ");
    gets(str);

    printf("Enter the Character that you want to Search for :  ");
    scanf("%c", &ch);

    remove(str, ch);
    return 0;
}