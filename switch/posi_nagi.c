// •	Check whether a number is positive, negative or zero using a switch case.
#include <stdio.h>

void check(int num)
{
    switch (num > 0)
    {

    case 1:
        printf("%d is positive.", num);
        break;

    case 0:
        switch (num < 0)
        {
        case 1:
            printf("%d is negative.", num);
            break;
        case 0:
            printf("%d is zero.", num);
            break;
        }
        break;
    }
}
int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);
    check(num);
    return 0;
}