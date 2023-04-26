#include <stdio.h>

int main()
{
    float num1, num2, result;
    char op;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, /, %%, *): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;

    case '-':
        result = num1 - num2;
        break;

    case '/':
        if (num2 == 0)
        {
            printf("Error: Division by zero\n");
            return 0;
        }
        result = num1 / num2;
        break;

    case '%':
        if (num2 == 0)
        {
            printf("Error: Modulo by zero\n");
            return 0;
        }
        result = (int)num1 % (int)num2;
        break;

    case '*':
        result = num1 * num2;
        break;

    default:
        printf("Error: Invalid operator\n");
        return 0;
    }

    printf("%.2f %c %.2f = %.2f\n", num1, op, num2, result);
    return 0;
}
