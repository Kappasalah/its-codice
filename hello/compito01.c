#include <stdio.h>

int main() 
{
    char name[50];
    char surname[50];
     

    printf("Welcome!\n\n");

    
    printf("Enter your name: ");
    scanf("%s", name);  

    printf("Enter your surname: ");
    scanf("%s", surname);  



    printf("\nHello %s %s! Thank you for using our service, Merry Christmas and Happy New Year.\n\n", name, surname);

   
   return 0;
}
