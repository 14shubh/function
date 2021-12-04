// •	Count frequency of each element in an array.

#include <stdio.h>

void check(int arr[],int Size)
{

    int FreqArr[10],Count;
    for (int i = 0; i < Size; i++)
    {
        Count = 1;
        for (int j = i + 1; j < Size; j++)
        {
            if (arr[i] == arr[j])
            {
                Count++;
                FreqArr[j] = 0;
            }
        }
        if (FreqArr[i] != 0)
        {
            FreqArr[i] = Count;
        }
    }

    printf("\n Frequency of All the Elements in this Array are : \n");
    for (int i = 0; i < Size; i++)
    {
        if (FreqArr[i] != 0)
        {
            printf("%d Occurs %d Times \n", arr[i], FreqArr[i]);
        }
    }
}
int main()
{
    int arr[10],FreqArr[10], Size;

    printf("\n Please Enter Number of elements in an array  :   ");
    scanf("%d", &Size);

    printf("\n Please Enter %d elements of an Array  :  ", Size);
    for (int i = 0; i < Size; i++)
    {
        scanf("%d", &arr[i]);
        FreqArr[i] = -1;
    }

    check(arr, Size);
    return 0;
}