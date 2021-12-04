// •	Get the second largest element in an array.

#include <stdio.h>

void second_largest_element(int a[], int n)
{
    int  large, s_large;
    large=s_large=a[0];
     
    for(int i=1;i<n;i++)
    {
        if(large<a[i])
        {
            s_large=large;
            large=a[i];
        }
        else if(s_large<a[i] && a[i]!=large)
        {
            s_large=a[i];
        }
    }
     
    printf("\n The Second Largest Element in the given Array: %d", s_large);

}

int main()
{
    int a[50];
    int n, i;

    printf("\n Enter number of elements: ");
    scanf("%d", &n);

    printf("\n Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    second_largest_element(a,n);

    return 0;
}