// •	A Character Is an Alphabet or Not
#include <stdio.h>

char check_alphabate(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {

        printf("%c is an alphabet.", c);
    }
    else
    {

        printf("%c is not an alphabet.", c);
    }
}

int main()
{
    char c, check;
    printf("Enter a character: ");
    scanf("%c", &c);

    check_alphabate(c);
    return 0;
}
