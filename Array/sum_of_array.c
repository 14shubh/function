// •	Sum of all array elements. – using recursion.

#include <stdio.h>

int findSum(int a[], int n)
{
    if (n <= 0)
    {
        return 0;
    }
    return (findSum(a, n - 1) + a[n - 1]);
}

// Driver code
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    printf("%d\n", findSum(a, n));
    return 0;
}