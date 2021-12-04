// •	Left rotate an array.

#include <stdio.h>

int left_rotate(int a[], int n)
{
       int k, temp;
       printf("how many times left rotate : ");
       scanf("%d", &k);

       for (int i = 0; i < k; i++)
       {
              temp = a[0];
              for (int j = 0; j < n - 1; j++)
              {
                     a[j] = a[j + 1];
              }

              a[n - 1] = temp;
       }
       printf("\narray elements after left rotate  : ");

       for (int i = 0; i < n; i++)
       {
              printf("%d ", a[i]);
       }
}

int main()
{
       int a[10000], n;

       printf("Enter size of the  array : ");
       scanf("%d", &n);
       printf("Enter elements in array : ");
       for (int i = 0; i < n; i++)
       {
              scanf("%d", &a[i]);
       }
       left_rotate(a, n);
}