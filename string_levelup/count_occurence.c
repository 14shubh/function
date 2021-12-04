// •	Count occurrences of a character in a given string.

#include <stdio.h>
#include <string.h>

char count(char str[], char ch)
{
    int i, Count = 0;
    for (i = 0; i <= strlen(str); i++)
    {
        if (str[i] == ch)
        {
            Count++;
        }
    }
    printf("\n The Total Number of times '%c' has Occurred = %d ", ch, Count);
}
int main()
{
    char str[100], ch;

    printf("\n Please Enter any String :  ");
    gets(str);

    printf("\n Please Enter the Character that you want to Search for :  ");
    scanf("%c", &ch);

    count(str, ch);
    return 0;
}