// •	Find Radius, Circumference and Volume of Cylinder

#include <stdio.h>

void Check(int choice)
{
    float radius = 0.0, height = 0.0;
    char quit;
    const float pi = 3.1415658;
    switch (choice)
    {
    case 1:
        printf("\nEnter Radius of Circle:");
        scanf("%f", &radius);

        printf("\nArea of Circle = %.5f", radius * radius * pi);

        break;
    case 2:
        printf("\nEnter Radius of Circle:");
        scanf("%f", &radius);
        printf("\nCircumference of Circle = %.5f", 2 * radius * pi);

        break;
    case 3:
        printf("\nEnter Radius of Cylinder:");
        scanf("%f", &radius);
        printf("\nEnter Hight of Cylinder:");
        scanf("%f", &height);

        printf("\nVolume of cylinder = %.5f", radius * radius * pi * height);

        break;
    case 0:
        quit = 'y';
        break;
    default:

        printf("\nWrong Choice....Try Again!!!\n");
        break;
    }
}
int main()
{
    int choice;

    printf("\nWhat Do You Want To Calculate?");
    printf("\n1. For Area of Circle");
    printf("\n2. For Circumference of Circle");
    printf("\n3. For Volume of Cylinder");
    printf("\n0. For For Quit");

    printf("\nEnter Your Choice Here:");
    scanf("%d", &choice);

    Check(choice);

    return 0;
}
