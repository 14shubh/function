// •	Read and print elements of the array. – using recursion.

#include <stdio.h>

void printArray(int arr[], int start, int len)
{
    // Recursion base condition
    if (start >= len)
        return;

    // Prints the current array element
    printf("%d, ", arr[start]);

    // Recursively call printArray to print next element in the array
    printArray(arr, start + 1, len);
}

int main()
{

    int num, i;

    // Input size and elements in array
    printf("Enter size of the array: ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter elements in the array: ");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Prints array recursively
    printf("Elements in the array: ");
    printArray(arr, 0, num); 

    return 0;
}
