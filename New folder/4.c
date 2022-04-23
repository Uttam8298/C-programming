#include <stdio.h>

int main()
{
    float a, b;
    char op;

    printf("Enter two numbers followed by operator: ");
    scanf("%f %f %c", &a, &b, &op);

    switch (op)
    {
    case '+':
        printf("%f\n", a + b);
        break;
    case '-':
        printf("%f\n", a - b);
        break;
    case '*':
        printf("%f\n", a * b);
        break;
    case '/':
        if (b == 0)
        {
            printf("Cannot divide by zero!\n");
            break;
        }
        printf("%f\n", a / b);
        break;
    default:
        printf("Operator should be +, -, *, /\n");
    }
}