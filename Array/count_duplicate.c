// •	Count the total number of duplicate elements in an array.

#include <stdio.h>
void count(int arr[], int size)
{
    int i, j, size, count = 0;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            /* If duplicate found then increment count by 1 */
            if (arr[i] == arr[j])
            {
                count++; 
                break;
            }
        }
    }

    printf("\nTotal number of duplicate elements found in array = %d", count);
}
int main()
{
    int arr[100];
    int i, size;

    /* Input size of array */
    printf("Enter size of the array : ");
    scanf("%d", &size);

    /* Input elements in array */
    printf("Enter elements in array : ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    count(arr, size);
    return 0;
}