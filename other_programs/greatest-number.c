#include <stdio.h>
int greaternum(int a, int b, int c)
{
    int x;
    if (x = (a > b && a > c) ? a : (b > c) ? b : c)
    {
        printf("%d is greater", x);
    }
}
int main()
{

    int a, b, c;
    printf("Enter three number \n");
    scanf("%d%d%d", &a, &b, &c);
    greaternum(a,b,c);
    return 0;
}