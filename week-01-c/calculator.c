#include <stdio.h>

int main(void)
{
    double num1, num2;
    char operation;

    printf("=================================\n");
    printf("       SENTINEL CALCULATOR       \n");
    printf("=================================\n");

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operation);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (operation)
    {
        case '+':
            printf("Result: %.2lf\n", num1 + num2);
            break;

        case '-':
            printf("Result: %.2lf\n", num1 - num2);
            break;

        case '*':
            printf("Result: %.2lf\n", num1 * num2);
            break;

        case '/':
            if (num2 != 0)
            {
                printf("Result: %.2lf\n", num1 / num2);
            }
            else
            {
                printf("Error: Cannot divide by zero!\n");
            }
            break;

        default:
            printf("Invalid operator!\n");
    }

    printf("\nThank you for using Sentinel Calculator!\n");

    return 0;
}