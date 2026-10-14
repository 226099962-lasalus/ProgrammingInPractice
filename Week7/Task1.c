#include <stdio.h>
#include <string.h>

int main() {
    //Define character arrays to store inputs
    char name[50];
    char email[80];
    char phone[20];
    char town[50];

    //Ask user for supplier Name
    printf("Enter supplier name: ");
    fgets(name, sizeof(name), stdin);
    //Remove the trailing new line character
    name[strcspn(name, "\n")] = '\0';

    //Ask user for the email
    printf("Enter email: ");
    fgets(email, sizeof(email), stdin);
    email[strcspn(email, "\n")] = '\0';

    //Ask user for Phone Number
    printf("Enter phone number: ");
    fgets(phone, sizeof(phone), stdin);
    phone[strcspn(phone, "\n")] = '\0';

    //Ask user town
    printf("Enter town: ");
    fgets(town, sizeof(town), stdin);
    town[strcspn(town, "\n")] = '\0';
    
    //Display the formatted output as requested
    printf("\n--- SUPLLIER DETAILS ---\n");
    printf("Name: %s\n",  name);
    printf("Email: %s\n", email);
    printf("Phone: %d\n", phone);
    printf("Town: %s\n", town);

    return 0;
}


