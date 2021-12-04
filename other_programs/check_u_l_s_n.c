// •	Uppercase, Lowercase, Special Character, or Digit

#include <stdio.h>

void check(char ch)
{
    if (ch >= 65 && ch <= 90)
        printf("%c is Uppercase",ch);
    else if (ch >= 97 && ch <= 122)
        printf("%c is Lowercase",ch);
    else if (ch >= 48 && ch <= 57)
        printf("%c is Number",ch);
    else
        printf("%c is Symbol",ch);
}
int main()
{

    char ch;
    printf("Enter Alphabet in uppercase or lowercase,Number or Special_Character and check : ");
    scanf("%c", &ch);
    check(ch);

    return 0;
}