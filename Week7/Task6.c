#include <stdio.h>
#include <string.h>

#define MAX_SUPPLIERS 50
#define MAX_NAME_LEN 100

//Structure to store the supplier information
struct Supplier {
    char name[MAX_NAME_LEN];
};

int main() {
    struct Supplier suppliers[MAX_SUPPLIERS];
    int supplierCount = 0;
    int choice;
    char searchName[MAX_NAME_LEN];
    char tempName[MAX_NAME_LEN];
    char displayBuffer[MAX_NAME_LEN + 20];

    do {
        //Display Menu Header
        printf("\n==============================\n");
        printf("MUNICIPAL FINANCIAL MANAGEMENT\n");
        printf("1. Add Supplier\n");
        printf("2. Display Supplier\n");
        printf("3. Search Supplier\n");
        printf("4. Show name Lenth\n");
        printf("5. Exit\n");
        printf("Enter choice:");
        scanf("%d", &choice);
        //Clear new line character from buffer
        getchar();

        switch(choice){
            //Add supplier
            case1:
            if (supplierCount <MAX_SUPPLIERS){
                printf("Enter supplier name:");
                fgets(tempName, MAX_NAME_LEN, stdin);

                //Remove trailing newline character
                tempName[strcspn(tempName, "\n")] = '\0';

                //Using strcpy() to copy entered name int array
                strcpy(suppliers[supplierCount].name, tempName);
                supplierCount++;
                printf("Supplier added successfully!\n");
            } else {
                printf("Supplier storage full!\n");
            }
            break;
            //Display supplier
            case2:
            if (supplierCount == 0) {
                printf("No suppliers availabe to display.\n");
            } else {
                printf("\n--- Stored Suppliers ---\n");
                for (int i = 0; i < supplierCount; i++) {
                    //Using strcpy() and strcat() for formatting to display string
                    strcpy(displayBuffer, "Supplier Name:");
                    strcat(displayBuffer, suppliers[i].name);
                    printf("%d. %s\n", i +1, displayBuffer);
                }
            }
            break;
            //Search Supplier

            case3:
            if (supplierCount == 0) {
                printf("No suppliers to search.\n");
            } else {
                printf("Enter name of the supplier to search:");
                fgets(searchName, MAX_NAME_LEN, stdin);
                searchName[strcspn(searchName, "\n")] == '\0';

                int found = 0;
                for (int i = 0; i < supplierCount; i++){
                    //Using strcmp() to see if teh names sre matching
                    if (strcmp(suppliers[i].name, searchName) == 0){
                        printf("Matching names found! Supplier index: %d\n", i+1);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Supplier not found.\n");
                }
            }
            break;
            //Show Name Length

            case4:
            if (supplierCount == 0) {
                printf("No supplier registered yet.\n");
            } else {
                printf("\n--- Supplier Name Lengths ---\n");
                for (int i = 0; i < supplierCount; i++) {
                    //Using strlen() to check characters in the supplier name
                    int length = strlen(suppliers[i].name);
                    printf("%d. %s\n (Length:%d characters)\n", i + 1, suppliers[i].name, length);
                }
            }
            break;
            //Exiting

            case5:
            printf("Exiting the program See you!\n");
            break;

            default:
            printf("Invalid choice! Please select option between 1 nad 5.\n");
        }
     } while (choice != 5);

     return 0;
    }






