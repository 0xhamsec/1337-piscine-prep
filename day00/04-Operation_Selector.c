/*=================================================================================*/
// Write a program that asks the user to input two numbers (float) 
// and an operation symbol ( + , - , * , / ), 
// then performs the operation and prints the result.
// Required Concepts: if-else , char , switch (optional), division by zero handling.
/*==================================================================================*/

#include <stdio.h>

int main()
{
    float number_one;
    float number_two;
    char operator;

    // Asking user for input
    printf("Enter the first number: ");
    scanf("%f", &number_one);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Space before %c to skip any whitespace

    printf("Enter the second number: ");
    scanf("%f", &number_two);

    // Performing operation using switch
    switch (operator)
    {
        case '+':
            printf("Result: %.2f\n", number_one + number_two);
            break;
        case '-':
            printf("Result: %.2f\n", number_one - number_two);
            break;
        case '*':
            printf("Result: %.2f\n", number_one * number_two);
            break;
        case '/':
            if (number_two == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                printf("Result: %.2f\n", number_one / number_two);
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}
