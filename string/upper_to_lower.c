#include <stdio.h>

char foruppercase(char arr[])
{
   
    for (int i = 0; arr[i] != '\0'; i++)
    {
        
        if (arr[i] >= 'A' && arr[i] <= 'Z')
        {
            arr[i] = arr[i] + 32;
        }
    }
     printf("%s", arr);
}
int main()
{
    char arr[100];
    printf("enter uppercase string : ");
    scanf("%s", arr);
    foruppercase(arr);
    return 0;
}