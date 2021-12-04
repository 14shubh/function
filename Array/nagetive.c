// •	Count the total number of negative elements in an array.

#include <stdio.h>

void negative(int a[], int n)
{
    int  c = 0;
    for (int i = 0; i < n; i++)
    {

        if (a[i] < 0)
            c++;
    }
    printf("  count  of negative numbers  in array: %d", c);
}
int main()
{
    int a[1000], n;

    printf("Enter size of the array : ");
    scanf("%d", &n);

    printf("Enter elements in array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    negative(a,n);

    return 0;
}