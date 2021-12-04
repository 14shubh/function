// •	Find the first occurrence of a character in a given string.

#include <stdio.h>
#include <string.h>

char occurence(char str[], char ch)
{
    int i, flag;
    flag = 0;
    for (i = 0; i <= strlen(str); i++)
    {
        if (str[i] == ch)
        {
            flag++;
            break;
        }
    }
    if (flag == 0)
    {
        printf("\n Sorry!! We haven't found the Search Character '%c' ", ch);
    }
    else
    {
        printf("\n The First Occurrence of the Search Element '%c' is at Position %d ", ch, i + 1);
    }
}
int main()
{
    char str[100], ch;

    printf("\n Please Enter any String :  ");
    gets(str);

    printf("\n Please Enter the Character that you want to Search for :  ");
    scanf("%c", &ch);

    occurence(str, ch);
    return 0;
}