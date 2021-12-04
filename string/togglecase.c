// 10.	Toggle case of each character of a string.

#include <stdio.h>
#include <string.h>
char change(char arr[])
{

    for (int i = 0; arr[i] != '\0'; i++)
    {

        if (arr[i] >= 'A' && arr[i] <= 'Z')
        {
            arr[i] = arr[i] + 32;
        }
        else if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            arr[i] = arr[i] - 32;
        }

    }
    printf(" %s",arr);
}
int main()
{
    char arr[100];
    printf(" Enter string and convert into a toggle case string : ");
    gets(arr);
    change(arr);
    return 0;
}