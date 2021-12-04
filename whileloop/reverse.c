// •	Reverse A given Number
#include <stdio.h>

// Reverse Number
int reverse(int number){
    int r,sum=0;
     while (number){
        r = number%10;
        sum = sum*10+r;
        number=number/10; 

    }
    return sum; // return reverse number to main function
}
int main () {
    int number;
    printf ("Enter number : ");
    scanf("%d",&number);
    printf ("Reverse Number : %d",reverse(number));
    return 0;
}