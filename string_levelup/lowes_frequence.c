// •	Find the lowest frequency character in a string.

#include <stdio.h>
#include <string.h>

char frequency(char s[])
{
    int a[1000], i, j, k, count = 0, n;

    for (j = 0; s[j]; j++)
    {
    }

    k = n = j;

    for (i = 0; i < n; i++)
    {
        a[i] = n;
        count = 1;
        if (s[i])
        {

            for (j = i + 1; j < n; j++)
            {

                if (s[i] == s[j])
                {
                    count++;
                    s[j] = '\0';
                }
            }
            a[i] = count;
            if (count <= k)
                k = count;
        }
    }
    printf("minimum occurring characters ");
    for (j = 0; j < n; j++)
    {

        if (a[j] == k)
        {
            printf(" '%c',", s[j]);
        }
    }

    printf("\b = %d times \n ", k);
}
int main()
{
    char s[1000];

    printf("Enter  the string : ");
    gets(s);

    frequency(s);
    return 0;
}