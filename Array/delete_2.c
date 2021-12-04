// •	Delete Element From Array At Desired Or Specific Position
#include <stdio.h>

delete_ele(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {

        printf("%d ", a[i]);
    }
}
int main()
{
    int a[10000], i, n, index, new1;

    printf("Enter size of the array : ");
    scanf("%d", &n);

    printf("Enter elements in array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter position should not greater than %d:", n);
    scanf("%d", &index);
    if (index <= n && index > 0)
    {

        printf("\nbefore deletion  :");

        delete_ele(a, n);

        for (i = index - 1; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }

        printf("\nafter   deletion :");

        delete_ele(a, n - 1);
    }
    else
        printf("\ninvalid input");

    return 0;
}