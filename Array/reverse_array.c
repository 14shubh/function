// •	Find the reverse of an array.

#include <stdio.h>

// function to reverse an Array
void reverse(int arr[10], int n)
{
  int i, tmp;
  for(i=0;i< n/2;i++)
  {
    tmp = arr[i];
    arr[i] = arr[n-1-i];
    arr[n-1-i] = tmp;
  }
}

int main()
{
  int arr[100], i, size;

  printf("Enter size of array: ");
  scanf("%d",&size);

  printf("Enter the elements of the array: ");
  for (i = 0; i < size; i++)
    scanf("%d", &arr[i]);

  // call reverse function 
  reverse(arr,size);

  // display reversed array 
  printf("After reversing the array: ");
  for(i=0;i < size;i++)
  {
    printf("%d ", arr[i]);
  }
  return 0;
}