
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
 {
    char districts[10][50];
    int areaCodes[10];

    printf("Please enter 10 district names and their area codes:\n");
    for(int i = 0; i < 10; i++) 
    {
        printf("District %d name: ", i + 1);
        scanf("%49s", districts[i]); 
        printf("District %d area code: ", i + 1);
        scanf("%d", &areaCodes[i]);
    }

    printf("\nEnter a district name or area code to search: ");
    char searchInput[50];
    scanf("%49s", searchInput); 

    int isCode = 1;
    for(int i = 0; searchInput[i]; i++) 
    {
        if (!isdigit(searchInput[i])) 
        {
            isCode = 0;
            break;
        }
    }

    for (int i = 0; searchInput[i]; i++) 
    {
        searchInput[i] = tolower(searchInput[i]);
    }

    printf("\nMatching districts and area codes:\n");
    for(int i = 0; i < 10; i++) 
    {
        char lowerDistrict[50];
        strcpy(lowerDistrict, districts[i]);

        for (int j = 0; lowerDistrict[j]; j++) 
        {
            lowerDistrict[j] = tolower(lowerDistrict[j]);
        }

        if ((isCode && areaCodes[i] == atoi(searchInput)) || (!isCode && strcmp(lowerDistrict, searchInput) == 0))
         {
            printf("District: %s, Area Code: %d\n", districts[i], areaCodes[i]);
        }
    }

    return 0;
}
