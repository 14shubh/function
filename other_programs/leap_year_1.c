// •	Leap Year Program
#include <stdio.h>

// Check year is leap or not
void check(int year)
{
    if ((year % 4) == 0)
    {
        printf("This year is leap year");
    }
    else
    {
        printf("This year is not leap year");
    }
}

int main()
{
    int year;
    printf("Enter Year : ");
    scanf("%d", &year);
    check(year);
    return 0;
}