// •	Print A Calendar Taking Input From User Using Loop

#include <stdio.h>
#include <stdlib.h>

void calander(int day, int k)
{
    int dt = 1;
    printf("\nMon \tTue \tWed \tThu \tFri \tSat \tSun \n\n");
    printf(" _________________________________________________\n\n");

    for (int j = k; j > 0; j--)
    {
        printf("\t");
    }

    while (dt <= day)
    {
        if (k != 0)
        {
            if (k % 7 == 0)
                printf("\n");
        }

        printf("%d\t", dt);
        dt++;
        k++;
    }
}
void main()
{

    int k, day;

    printf("C Program to Print a Calendar With Start With Input Day\n\n");

    printf("Enter Total Numbers of Days in a Month : ");
    scanf("%d", &day);

    printf("\n\nEnter First Day Start From <0-Mon....5-Sat & 6-Sun> End With Sunday : ");
    scanf("%d", &k);

    calander(day,k);
}