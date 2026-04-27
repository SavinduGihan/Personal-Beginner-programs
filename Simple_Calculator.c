#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%f", &num2);

    if (op == '+') {
        result = num1 + num2;
        printf("Result = %.2f\n", result);
    } else if (op == '-') {
        result = num1 - num2;
        printf("Result = %.2f\n", result);
    } else if (op == '*') {
        result = num1 * num2;
        printf("Result = %.2f\n", result);
    } else if (op == '/') {
        if (num2 != 0)
            printf("Result = %.2f\n", num1 / num2);
        else
            printf("Cannot divide by zero.\n");
    } else {
        printf("Invalid operator.\n");
    }

    return 0;
}
