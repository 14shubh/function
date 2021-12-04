#include <stdio.h>

int evenodd(int a[], int b[],int n,int c)
{
    int  j, k=0, temp=0;
    for (int i = 0; i < n - 1; i++)
    {

        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    j = n - c;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            if (k < n - c)
                b[k++] = a[i];
        }
        else
        {
            if (j < n)
                b[j++] = a[i];
        }
    }

    printf("\narray after sorting even and odd elements separately:\n ");

    for (int i = 0; i < n; i++)
    {
        a[i] = b[i];
        printf("%d ", a[i]);
    }

}
int main()
{
    int a[100], b[100], i, n, c = 0;

    printf("Enter size of the  array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 1)
            c++;
    }
    evenodd(a,b,n,c);
    return 0;
}