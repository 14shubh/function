// •	Print all negative elements in an array.
#include <stdio.h>

void negative_ele(int a[], int n)
{
    printf("\nAll negative elements in array are : ");
    for (int i = 0; i < n; i++)
    {

        if (a[i] < 0)
        {
            printf("%d\t", a[i]);
        }
    }
}
int main()
{
    int a[100], n;

    printf("Enter size of the array : ");
    scanf("%d", &n);

    printf("Enter elements in array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    negative_ele(a,n);

    return 0;
}