#include <stdio.h>

int main() {
    double num1, num2, result;
    char option;

    printf("Enter first number: ");
    scanf("%lf", &num1); // Use %lf for double
    printf("Enter option (+, -, *, /): ");
    scanf(" %c", &option); // Note the space before %c to consume any leftover newline
    printf("Enter second number: ");
    scanf("%lf", &num2); // Use %lf for double

    switch (option) {
        case '+':
            result = num1 + num2;
            printf("Sum: %lf\n", result); // Use %lf for double
            break;
        case '-':
            result = num1 - num2;
            printf("Difference: %lf\n", result); // Use %lf for double
            break;
        case '*':
            result = num1 * num2;
            printf("Product: %lf\n", result); // Use %lf for double
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Quotient: %lf\n", result); // Use %lf for double
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid option.\n");
            break;
    }
     printf("mahima kukadiya, 24TCES9M");
    return 0; // Return an integer from main
}
