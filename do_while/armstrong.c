// •	Find Number Is Armstrong Or Not

#include <stdio.h>

int Armstrong(int num)
{
    int originalNum, remainder, result = 0;
    originalNum = num;
    do
    {
        // remainder contains the last digit
        remainder = originalNum % 10;

        result = result + remainder * remainder * remainder;

        // removing last digit from the original number
        originalNum /= 10;
    } while (originalNum != 0);
    return result;
}
int main()
{
    int num;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);

    if (Armstrong(num) == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}
