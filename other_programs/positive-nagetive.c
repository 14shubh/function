// •	The Number Is Positive or Negative

#include <stdio.h>

void positive_nagitive(int num)
{
    if (num > 0)
    {
        printf("%d is a positive number \n", num);
    }
    else
    {
        if (num < 0)
        {
            /* code */
            printf("%d is a negative number \n", num);
        }
        else
        {
            printf("neither negative or positive");
        }
    }
}
int main()
{
    int num;

    printf("Input a number :");
    scanf("%d", &num);
    positive_nagitive(num);
    return 0;
}