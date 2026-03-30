#include <stdio.h>

int main() {
    double num1, num2;
    char operator;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Input the operation
    printf("Enter operator (+, -): ");
    scanf(" %c", &operator);  // Note the space before %c to consume any leftover newline

    // Perform calculation based on operator
    switch(operator) {
        case '+':
            printf("Result: %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.2lf\n", num1 - num2);
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
