#include <stdio.h>

int main() 
{
    char operator;  
    int num1, num2; 

    while (1)
    {  
        printf("Enter an operator (+, -, *, /), or press x to exit: ");
        scanf(" %c", &operator);  

        if (operator == 'x' || operator == 'X') 
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
            printf("%d / %d = %d\n", num1, num2, num1 / num2);  
        } else {
            printf("Invalid operator.\n");  
        }
    }

    return 0;  
}
