// •	Find the maximum between the three numbers.

#include <stdio.h>

// check maximum number.....
int check(int num1, int num2, int num3)
{
    int max;
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            // If num1 > num2 and num1 > num3
            max = num1;
        }
        else
        {
            // If num1 > num2 but num1 > num3 is not true
            max = num3;
        }
    }
    else
    {
        if (num2 > num3)
        {
            // If num1 is not > num2 and num2 > num3
            max = num2;
        }
        else
        {
            // If num1 is not > num2 and num2 > num3
            max = num3;
        }
    }
    return max;
}
int main()
{
    int num1, num2, num3, max;

    // Input three numbers from user 
    printf("Enter three numbers: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    max = check(num1, num2, num3);
    // Print maximum value 
    printf("Maximum number is = %d", max);

    return 0;
}