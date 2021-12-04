#include <stdio.h>

int GCD(int n1, int n2)
{

    int gcd;
    for (int i = 1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }
    return gcd;
}

int main()
{
    int n1, n2, i, gcd, result;

    printf("Enter two number: ");
    scanf("%d %d", &n1, &n2);

    result = GCD(n1, n2);

    printf("G.C.D of %d and %d is %d", n1, n2, result);

    return 0;
}