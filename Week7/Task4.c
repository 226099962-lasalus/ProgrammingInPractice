#include <stdio.h>
#include <string.h>

int main() {
    //Declare the original and backup arrays
    char original[90] = "Macaroni Polana";
    char backup[90];

    //use strcpy() to copy original into backup
    //Syntax:strcpy(destination, sources);
    strcpy(backup, original);

    //Display both values if they match
    printf("Original value: %s\n", original);
    printf("Backup value: %s\n", backup);

    return 0;
}