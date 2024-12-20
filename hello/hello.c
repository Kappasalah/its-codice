#include <stdio.h>

int main()
{
    // Declare a variable to store the name (32 characters max)
    char name[32];

    // Print the "Hello World" message
    printf("Hello World!!!\n\n\n");

    // Ask for the name
    printf("Enter a name: ");
    
    // Read the user's input
    scanf("%s", name);

    // Print a message using the name entered
    printf("\nHello\t%s\n\n\n", name);

    // Return 0 to indicate successful program termination
    return 0;
}
