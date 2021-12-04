// •	Delete all occurrences of a character from a string.

#include <stdio.h>
#include <string.h>

char delete (char s[], char c)
{
    int k = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        s[i] = s[i + k];

        if (s[i] == c)
        {
            k++;
            i--;
        }
    }
    printf("%s", s);
}
int main()
{
    char s[100], c;

    printf("Enter  the string : ");
    gets(s);

    printf("Enter character: ");
    scanf("%c", &c);

    delete (s, c);

    return 0;
}