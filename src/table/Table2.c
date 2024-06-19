#include <stdio.h>

int main()
 {
    char operator;
    int num1, num2;

    while (1) 
    {
        printf("Enter an operator (+, -, *, /), if want to exit press x: ");
        scanf(" %c", &operator);

        if (operator == 'x') 
        {
            break;
        }

        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);

        if (operator == '+') 
        {
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
        } else if (operator == '-') 
        {
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
        } else if (operator == '*') 
        {
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
        } else if (operator == '/') 
        {
            if (num2 != 0) {
                printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
            } else {
                printf("Division by zero is not allowed.\n");
            }
        } else 
        {
            printf("Invalid operator.\n");
        }
    }

    return 0;
}
