// •	Search all occurrences of a character in a given string.

#include <stdio.h>
#include <string.h>

char all_occurrence(char str[], char ch)
{

    for (int i = 0; i <= strlen(str); i++)
    {
        if (str[i] == ch)
        {
            printf("\n '%c' is Found at Position %d ", ch, i + 1);
        }
    }
}
int main()
{
    char str[100], ch;

    printf("\n Please Enter any String :  ");
    gets(str);

    printf("\n Please Enter the Character that you want to Search for :  ");
    scanf("%c", &ch);
    all_occurrence(str, ch);
    return 0;
}
