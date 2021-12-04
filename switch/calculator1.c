// •	Calculator
#include <stdio.h>

void calculator(int first, int second, char op){
     switch (op)
    {
    case '+':
        printf("%d + %d = %d", first, second, first + second);
        break;
    case '-':
        printf("%d - %d = %d", first, second, first - second);
        break;
    case '*':
        printf("%d * %d = %d", first, second, first * second);
        break;
    case '/':
        printf("%d / %d = %d", first, second, first / second);
        break;
    // operator doesn't match any case constant
    default:
        printf("Error! operator is not correct");
    }
}
int main()
{
    char op;
    int first, second;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter two operands: ");
    scanf("%d %d", &first, &second);
    calculator(first,second,op);
    return 0;
}
