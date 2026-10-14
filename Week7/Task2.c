#include <stdio.h>
#include <string.h>

int main() {
    //Define the supplier details
    char name[] = "David Luque";
    char email[] = "juliadonacky@gmail.com";
    char town[] = "Salvador";

    //Display the suppliers details
    printf("--- SUPPLIER DETAILS ---\n");
    printf("Name: %s\n", name);
    printf("Email: %s\n",email);
    printf("Town: %s\n", town);

    // Displaying stringLength using strlen()
    printf("Supplier name lenth: %lu\n", strlen(name));
    printf("Email length: %lu\n", strlen(email));
    printf("Town length: %lu\n", strlen(town));

    return 0;
}