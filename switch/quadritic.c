// •	Find roots of a quadratic equation using switch case.
#include <stdio.h>
#include <math.h>
int calculate(int a, int b, int c)
{

    float root1, root2, imaginary;
    float discriminant;
    /* Calculate discriminant */
    discriminant = (b * b) - (4 * a * c);

    /* Compute roots of quadratic equation based on the nature of discriminant */
    switch (discriminant > 0)
    {
    case 1:
        /* If discriminant is positive */
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Two distinct and real roots exists: %.2f and %.2f",
               root1, root2);
        break;

    case 0:
        /* If discriminant is not positive */
        switch (discriminant < 0)
        {
        case 1:
            /* If discriminant is negative */
            root1 = root2 = -b / (2 * a);
            imaginary = sqrt(-discriminant) / (2 * a);

            printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f",
                   root1, imaginary, root2, imaginary);
            break;

        case 0:
            /* If discriminant is zero */
            root1 = root2 = -b / (2 * a);

            printf("Two equal and real roots exists: %.2f and %.2f", root1, root2);

            break;
        }
    }
}
int main()
{
    float a, b, c;

    printf("Enter values of a, b, c of quadratic equation (aX^2 + bX + c): ");
    scanf("%f%f%f", &a, &b, &c);

    calculate(a, b, c);
    return 0;
}