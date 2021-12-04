// •	Count the total number of even and odd elements in an array.

#include <stdio.h>
void even_odd(int a[],int n){
    int  even = 0, odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("even numbers in array: %d", even);
    printf("\n odd numbers in array: %d", odd);
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

    even_odd(a,n);

    return 0;
}