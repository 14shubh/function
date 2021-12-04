// •	Greatest of Two Numbers

#include <stdio.h>

// Check greter number.....
void check(int num1, int num2)
{
    if (num1 > num2)
    {
        printf("%d is greater", num1);
    }
    else
    {
        printf("%d is greater", num2);
    }
}
int main()
{
    int num1, num2;
    printf("Enter Two number and check Which one is greater than other : ");
    scanf("%d %d", &num1, &num2);
    check(num1, num2);
    return 0;
}