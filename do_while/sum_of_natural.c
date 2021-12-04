// •	Calculate Sum of Natural Numbers

#include <stdio.h>

int sum (int num)
{
    int i,sum=0;
    i = 1;
    do{
        sum =sum + i;
        ++i;
    }while (i <= num) ;
    return sum;
}
int main() {
    int num;
    printf("Enter a positive integer : ");
    scanf("%d", &num);
    
    printf("Sum = %d", sum(num));
    return 0;
}
