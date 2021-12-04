// •	Find the maximum between two numbers using the switch case.

#include <stdio.h>

void check(int num1, int num2)
{

    switch (num1 > num2)
    {

    case 0:
        printf("%d is maximum", num2);
        break;

    case 1:
        printf("%d is maximum", num1);
        break;
    }
}
int main()
{
    int num1, num2;

    // Input two numbers from user
    printf("Enter two numbers to find maximum: ");
    scanf("%d%d", &num1, &num2);

    check(num1, num2);
    return 0;
}