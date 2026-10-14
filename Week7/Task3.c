#include <stdio.h>
#include <string.h>

int main() {
    //Define two hardcoded supplier names
    char supplier1[] = "Luque";
    char supplier2[] = "David Luque";
    char searchInput[80];

    //Entering supplier name
    printf("Enter supplier name to search: ");

    //Using fgets to read strings with spaces
    fgets(searchInput, sizeof(searchInput), stdin);

    //Remove the trailing newline character added 
    searchInput[strcspn(searchInput, "\n")] = '\0';

    //Use strcmp() to check if matches supplier
    if (strcmp(searchInput, supplier1) == 0 || strcmp(searchInput, supplier2) == 0) {
        printf("Supplier found. \n");
    } else {
        printf("Supplier not found. \n");
    }
    return 0;
}
    