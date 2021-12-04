// •	Check String Is Palindrome Or Not Using For Loop

#include <stdio.h>
#include <string.h>
void check_palindrome(int len, char str[])
{
    int i,flag = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("\n %s is a Palindrome String", str);
    }
    else
    {
        printf("\n %s is Not a Palindrome String", str);
    }
}
int main()
{
    char str[100];
    int len;

    printf("\n Please Enter any String :  ");
    gets(str);

    len = strlen(str);

    check_palindrome(len, str);
    return 0;
}