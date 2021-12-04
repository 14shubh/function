#include <stdio.h>

void checkTriangle(int angle1, int angle2, int angle3)
{
    if (angle1 + angle2 + angle3 == 180)
    {
        printf("Triangle is valid.\n");
    }
    else
    {
        printf("Triangle is not valid.\n");
    }
}
int main()
{
    int angle1, angle2, angle3;
    printf("enter three angle :");
    scanf("%d%d%d", &angle1, &angle2, &angle3);
    checkTriangle(angle1, angle2, angle3);
    return 0;
}