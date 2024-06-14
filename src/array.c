#include <stdio.h>

int main() 
{
    int arr[1000] = {100, 200, 200, 200, 400, 200, 400, 600, 700, 600}; 
    int size = 1000;
    int count[1000] = {0};


    for (int i = 0; i < size; i++) 
    {
        count[arr[i]]++;
    }

    printf("Duplicate numbers are: ");
    for (int i = 0; i < 1000; i++) 
    {
        if (count[i] > 1)
        
         {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}