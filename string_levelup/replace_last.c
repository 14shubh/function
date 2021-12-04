// •	Replace the last occurrence of a character with another in a string.

#include <stdio.h>
#include <string.h>

char replace(char str[], char ch, char newch)
{
    int i, index;
    index = -1;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            index = i;
        }
    }

    if (index != -1)
    {
        str[index] = newch;
    }

    printf("String after Replacing Last occurrence of '%c' with '%c' = %s ", ch, newch, str);
}
int main()
{
    char str[100], ch, newch;
    printf("\n Please Enter any String :  ");
    gets(str);

    printf("Enter the Character that you want to Replace :  ");
    scanf("%c", &ch);

    getchar();

    printf("Enter the New Character :  ");
    scanf("%c", &newch);
    replace(str,ch,newch);
    return 0;
}