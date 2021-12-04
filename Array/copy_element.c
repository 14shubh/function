// •	Copy all elements from an array to another array.

#include <stdio.h>

void copy_ele(int arr1[], int size)
{
    int arr2[100];
    for (int i = 0; i < size; i++)
    {
        arr2[i] = arr1[i];
    }

    printf("\nElements of original array are : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr1[i]);
    }

    printf("\nElements of duplicate array are : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr2[i]);
    }
}
int main()
{
    int arr1[100];
    int size;

    // Input size of the array
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter elements of original array : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr1[i]);
    }
    copy_ele(arr1, size);
    return 0;
}