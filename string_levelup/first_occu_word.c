// •	Find the first occurrence of a word in a given string.

#include <stdio.h>
char find(char str[], char word[])
{
    int i, j, flag;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == word[0])
        {
            flag = 1;
            for (j = 0; word[j] != '\0'; j++)
            {
                if (str[i + j] != word[j])
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 1)
        {
            break;
        }
    }
    if (flag == 0)
    {
        printf("word not found '%s' ", word);
    }
    else
    {
        printf("\n We found '%s' at position %d ", word, i + 1);
    }
}
int main()
{
    char str[100], word[100];

    printf("Enter any String :  ");
    gets(str);

    printf("Enter the Word that you want to Search for :  ");
    gets(word);

    find(str, word);

    return 0;
}