#include <stdio.h>

int main()
 {
    int numbers[10];  

    
    printf("Enter 10 number:\n");
    for (int i = 0; i < 10; i++) 
    {
        scanf("%d", &numbers[i]);
    }

    
    for (int i = 0; i < 10; i++) 
    {
        if (numbers[i] % 2 == 0)
         {
            printf("%d is even.\n", numbers[i]);
        } else

         {
            printf("%d is odd.\n", numbers[i]);
        }
    }

    return 0;
}
