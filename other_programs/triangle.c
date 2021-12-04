// •	Check whether the triangle is an equilateral, isosceles or scalene triangle.

#include <stdio.h>

void checktriangle(int side1, int side2, int side3)
{
    if ((side1 == side2) && (side2 == side3))
    {
        /* code */
        printf("equilateral triangle");
    }
    else
    {
        if ((side1 == side2) || (side2 == side3) || (side3 == side1))
        {
            /* code */
            printf("Isosceles triangle");
        }
        else
        {
            printf("Scalene triangle");
        }
    }
}
int main()
{
    int side1, side2, side3;
    printf("Enter three sides :");
    scanf("%d%d%d", &side1, &side2, &side3);

    checktriangle(side1, side2, side3);
    return 0;
}