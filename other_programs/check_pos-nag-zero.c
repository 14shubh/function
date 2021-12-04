// •	Check whether a number is negative, positive or zero.

#include <stdio.h>

void check(int num){
     if(num > 0)
    {
        printf("Number is POSITIVE");
    }
    if(num < 0)
    {
        printf("Number is NEGATIVE");
    }
    if(num == 0)
    {
        printf("Number is ZERO");
    }

}
int main()
{
    int num;
    
    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);
    
    check(num);
    return 0;
}