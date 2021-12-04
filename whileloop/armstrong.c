// •	Find Number Is Armstrong Or Not

#include <stdio.h>

int Armstrong(int num)
{
    int originalNum, remainder, result = 0;
    originalNum = num;
    while (originalNum != 0)
    {

        remainder = originalNum % 10;

        result =result + remainder * remainder * remainder;


        originalNum /= 10;
    }
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
