
#include <stdio.h>

void trianglecheck(int angle1, int angle2, int angle3)
{
    int sum;
    // Calculate sum of angles
    sum = angle1 + angle2 + angle3;
    if (sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0)
    {
        printf("Triangle is valid.");
    }
    else
    {
        printf("Triangle is not valid.");
    }
}

int main()
{
    int angle1, angle2, angle3;

    // Input all three angles of triangle
    printf("Enter three angles of triangle: \n");
    scanf("%d%d%d", &angle1, &angle2, &angle3);

    trianglecheck(angle1, angle2, angle3);

    return 0;
}
