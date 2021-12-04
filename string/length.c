// •	Find the length of a string.

#include <stdio.h>
#include <string.h>

void find_length(char str[])
{
    int length;
    for (length = 0; str[length] != '\0'; length++)
    {
    }
    printf("String length is : %d", length);
}
int main()
{
    char str[100];

    printf("Enter string : ");
    scanf("%s", str);
    return 0;
}