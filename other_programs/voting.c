// •	Voting Eligibility Checker

#include <stdio.h>

void check(int age)
{
    if (age > 17)
    {
        printf("\nPerson is Eligible for Voting");
    }
    else
    {
        printf("\nPerson is NOT Eligible for Voting");
    }
}
int main()
{
    int age;
    printf("Enter Age of Person : ");
    scanf("%d", &age);
    check(age);
    return 0;
}