// •	Factorial of a Given Number
#include <stdio.h>

int factorial(int number){
    int fact=1;
    int i=1;
    while( i<=number){
    fact=fact*i;
     i++;
    }
    return fact;
}
int main () {
    int number;
    printf("enter number ");
    scanf ("%d",&number);
    printf("%d factorial is : %d",number,factorial(number));
   return 0;
}