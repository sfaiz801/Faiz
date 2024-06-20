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

        printf("Enter two Number: ");
        scanf("%d %d", &num1, &num2);

        
        switch (operator)
         {
            case '+':
                printf("%d + %d = %d\n", num1, num2, num1 + num2);
                break;
            case '-':
                printf("%d - %d = %d\n", num1, num2, num1 - num2);
                break;
            case '*':
                printf("%d * %d = %d\n", num1, num2, num1 * num2);
                break;
            case '/':
                if (num2 != 0) 
                {
                    printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
                } else 
                {
                    printf("Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Invalid operator.\n");
        }
    }

    return 0;
}
