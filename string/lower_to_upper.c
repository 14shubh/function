// 8.	Convert lowercase string to uppercase.

#include <stdio.h>

char foruppercase(char[]);

int main()
{

    char str[100];
    printf("enter lowercase string : ");
    scanf("%s", str);
    foruppercase(str);
    return 0;
}
char foruppercase(char arr[])
{
    int str;
   for(int i = 0; arr[i]!='\0'; i++){
        str = arr[i];
        if(str >= 'a' && str <= 'z'){
            arr[i] = arr[i] -32;
        }
   }
   printf("%s  ",arr);
}