// •	Right rotate an array.
#include <stdio.h>
int right_rotate(int a[], int k, int n)
{
    int temp=0,j;
    for (int i = 0; i < k; i++)
    {
        temp = a[n - 1];
        for (int j = n - 1; j > 0; j--)
        {
            a[j] = a[j - 1];
        }

        a[j] = temp;
    }
    printf("\narray elements after right rotate  : ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    int a[100], i, n, k;

    printf("Enter size of the  array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("how many times right rotate : ");
    scanf("%d", &k);

    right_rotate(a, k, n);
}