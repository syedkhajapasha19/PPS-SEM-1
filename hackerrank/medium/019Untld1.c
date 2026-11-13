#include <stdio.h>
int main()
{
    int a, b;
    char choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("\nEnter an operator (+, -, *, /, %%): ");
    scanf(" %c", &choice);
    switch (choice)
    {
        case '+':
            printf("Addition = %d\n", a + b);
            break;
        case '-':
            printf("Subtraction = %d\n", a - b);
            break;
        case '*':
            printf("Multiplication = %d\n", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Division = %d\n", a / b);
            else
                printf("Division by zero is not possible.\n");
            break;

        case '%':
            if (b != 0)
                printf("Modulus = %d\n", a % b);
            else
                printf("Modulus by zero is not possible.\n");
            break;

        default:
            printf("Invalid operator.\n");
    }
return 0;
}
