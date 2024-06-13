#include <stdio.h>

int main() 
{
    int arr[100] = {10, 20, 20, 20, 40, 20, 40, 60, 70, 60}; 
    int size = 100;
    int count[100] = {0};


    for (int i = 0; i < size; i++) 
    {
        count[arr[i]]++;
    }

    printf("Duplicate numbers are: ");
    for (int i = 0; i < 100; i++) 
    {
        if (count[i] > 1)
        
         {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
