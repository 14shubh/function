// •	Check whether a character is an uppercase or lowercase alphabet.

#include <stdio.h>
// Check character is an uppercase or lowercase alphabet.
void check(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("'%c' is uppercase alphabet.", ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("'%c' is lowercase alphabet.", ch);
    }
    else
    {
        printf("'%c' is not an alphabet.", ch);
    }
}
int main()
{
    char ch;

    /* Input character from user */
    printf("Enter any character: ");
    scanf("%c", &ch);

    check(ch);
    return 0;
}