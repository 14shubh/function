// 11.	Find a total number of alphabets, digits or special character in a string.

#include <stdio.h>
#include <string.h>

char check(char str[])
{
    int alp, digit, splch, i;

    alp = digit = splch = i = 0;

    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            alp++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digit++;
        }
        else
        {
            splch++;
        }

        i++;
    }

    printf("Number of Alphabets in the string is : %d\n", alp);
    printf("Number of Digits in the string is : %d\n", digit);
    printf("Number of Special characters in the string is : %d\n\n", splch);
}
int main()
{
    char str[100];

    printf("enter the string : ");
    scanf("%s", str);

    check(str);
}