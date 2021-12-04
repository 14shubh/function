// •	Replace the first occurrence of a character with another in a string.

#include <stdio.h>
#include <string.h>

char replace(char str[], char ch, char newch)
{

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            str[i] = newch;
            break;
        }
    }
    printf("\n The Final String after Replacing First occurrence of '%c' with '%c' = %s ", ch, newch, str);
}
int main()
{
    char str[100], ch, newch;

    printf("\n Please Enter any String :  ");
    gets(str);

    printf("\n Please Enter the Character that you want to Replace :  ");
    scanf("%c", &ch);
    getchar();
    printf("\n Please Enter the New Character :  ");
    scanf("%c", &newch);

    replace(str, ch, newch);
    return 0;
}