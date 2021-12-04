// •	Count Number of Digits of an Integer

#include <stdio.h>

int check(int num)
{
    int count = 0;
    // calculation
    while (num != 0)
    {
        num = num / 10;
        count++;
    }
    return count;
}
int main()
{
    // variable declaration
    int num;
    int count = 0;

    // user Input
    printf("Enter the integer: ");
    scanf("%d", &num);

    printf("The number of digits present are: %d", check(num));
    return 0;
}