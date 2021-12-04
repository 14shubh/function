// •	Find LCM of two Numbers
#include <stdio.h>

void LCM(int num1, int num2)
{
    int max;
    max = (num1 > num2) ? num1 : num2;
    do
    {
        if (max % num1 == 0 && max % num2 == 0)
        {
            printf("LCM of %d And %d is %d", num1, num2, max);
            break;
        }
        ++max;
    }while (1);
}
int main()
{
    int num1, num2;

    printf("Enter Two Positive Integers :\n");
    scanf("%d %d", &num1, &num2);

    LCM(num1, num2);
    return 0;
}