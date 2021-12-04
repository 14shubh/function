// •	Display Fibonacci Series

#include <stdio.h>

void fibonacci(int num)
{

    int count = 2, temp = 0, t1 = 0, t2 = 1;

    do
    {
        temp = t1 + t2;
        t1 = t2;
        t2 = temp;
        ++count;
        printf("%d, ",temp);   
    }while (count < num);
    
}
int main()
{

    int num,result, t1 = 0, t2 = 1;

    printf("Enter The Number of Terms :\n");
    scanf("%d", &num);
    printf("\nFibonacci Series : %d, %d, ", t1, t2);
    fibonacci(num);
    
    return 0;
}