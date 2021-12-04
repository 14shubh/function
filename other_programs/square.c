/* Example using sqrt by TechOnTheNet.com */

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[])
{
    /* Define temporary variables */
    double value;
    double result;

    /* Assign the value we will find the sqrt of */
    value = 25;

    /* Calculate the square root of value */
    result = sqrt(value);

    /* Display the result of the calculation */
    printf("The Square Root of %f is %f\n", value, result);

    return 0;
}