// •	Find the last occurrence of a character in a given string.

#include <stdio.h>
#include <string.h>

char last_occurrence(char,char);
int main()
{
    char str[100], ch;

    printf("\n Please Enter any String :  ");
    gets(str);

    printf("\n Please Enter the Character that you want to Search for :  ");
    scanf("%c", &ch);

    last_occurence(str, ch);
    return 0;
}

char last_occurence(char str[], char ch)
{
    int i, index;
    index = -1;
    for (i = 0; i <= strlen(str); i++)
    {
        if (str[i] == ch)
        {
            index = i;
        }
    }
    if (index == -1)
    {
        printf("\n No found the the Search Element '%c' ", ch);
    }
    else
    {
        printf("\n The Last Occurrence of the Search Element '%c'' at Position %d ", ch, index + 1);
    }
}