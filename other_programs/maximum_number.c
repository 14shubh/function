// •	Find the maximum between two numbers.

#include <stdio.h>

// check Maximum number
void check(int num1, int num2)
{
    // If num1 is maximum
    if (num1 > num2)
    {
        printf("%d is maximum number", num1);
    }

    // If num2 is maximum
    if (num2 > num1)
    {
        printf("%d is maximum number", num2);
    }

    //Additional condition check for equality
    if (num1 == num2)
    {
        printf("Both are equal");
    }
}
int main()
{
    int num1, num2;

    // Input two numbers from user 
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    check(num1, num2);
    return 0;
}