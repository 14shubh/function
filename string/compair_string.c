// •	Compare two strings.

#include <stdio.h>
#include <string.h>

void compair(char str1[], char str2[])
{
    int value;
    value = strcmp(str1, str2);
    if (value == 0)
        printf("strings are same");
    else
        printf("strings are not same");
}
int main()
{
    char str1[100];
    char str2[100];
    printf("Enter the first string : ");
    scanf("%s", str1);
    printf("Enter the second string : ");
    scanf("%s", str2);
    compair(str1, str2);
    return 0;
}
