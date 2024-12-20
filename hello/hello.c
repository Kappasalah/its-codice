#include <stdio.h>

int main()
{
   
    char name[50];
    char surname[50];
    char age[100];


    printf("Welcome!\n\n\n");


    printf("Enter your name: ");
    printf("Enter your surname: ");
    printf("Enter your age: ");
    
    
    scanf("%s", name);
    scanf("%s", surname);
    scanf("%s", age);

    printf("\nHello\t%s\n\n\n", name, surname);

    // Return 0 to indicate successful program termination
    return 0;
}
