// •	Check whether a number is divisible by 5 and 11 or not.

#include <stdio.h>
// Check number is divisible by 5 and 11 or not
void check(int num)
{
    if ((num % 5 == 0) && (num % 11 == 0))
    {
        printf("Number is divisible by 5 and 11");
    }
    else
    {
        printf("Number is not divisible by 5 and 11");
    }
}
int main()
{
    int num;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);

    check(num);
    return 0;
}