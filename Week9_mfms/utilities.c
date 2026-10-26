#include <stdio.h>
#include <string.h>
#include "utilities.h"

#define MAX_SALARIES 50
#define MAX_BUDGETS 10
#define MAX_VEHICLES 20
#define REG_LENGTH 20

// Function prototypes for salaries
void captureSalaries(float salaries[], int size);
void displaySalaries(float salaries[], int size);
float calculateAverage(float salaries[], int size);
float findHighest(float salaris[], int size);
float findLowest(float salaries[], int size);
void searchSalary(float salaries[], int size, float key);

// Function prototypes for budgets
void captureBudgets(float budgets[], int size);
void displayBudgets(float budgets[], int size);
float calculateTotalBudget(float budgets[], int size);
float calculateAverageBudget(float budgets[], int size);
void sortBudgets(float budgets[], int size);

// Function prototypes for vehicles
void captureVehicles(char regs[][REG_LENGTH], int size);
void displayVehicles(char regs[][REG_LENGTH], int size);

void runWeek6System(void){
    float salaries[MAX_SALARIES] = {0};
    float budgets[MAX_BUDGETS] = {0};
    char vehicles[MAX_VEHICLES][REG_LENGTH] = {{0}};

    // Menu and user interaction code would go here
    //Tracking data capture status
    int salariesCaptured = 0, budgetsCaptured = 0, vehiclesCaptured = 0;
    int mainChoice, subChoice;

    do {
        printf("\n============================================\n");
        printf(" MUNICIPAL INFORMATION MANAGEMENT SYSTEM \n");
        printf("============================================\n");
        printf("1. Employee Salaries\n");
        printf("2. Department Budgets\n");
        printf("3. Vehicle Registrations\n");
        printf("4. Exit System\n");
        printf("Enter your choice:");
        scanf("%d", &mainChoice);

        switch(mainChoice) {
            case 1:
                // Employee salaries Menu
                do {
                    printf("\n--- Employee Salaries menu ---\n");
                    printf("1. Capture Salaries\n");
                    printf("2. Display Salaries\n");
                    printf("3. Calculate Average Salary\n");
                    printf("4. find Highest Salary\n");
                    printf("5. Find Lowest Salary\n");
                    printf("6. Search For a Salary\n");
                    printf("7. Return to Main Menu\n");
                    printf("Enter your choice: ");
                    scanf("%d", &subChoice);

                    if (subChoice >= 1 && subChoice <= 6 && !salariesCaptured) {
                        printf("Error: Please capture salaries first (Option 1).\n");
                        continue;
                    }

                    switch (subChoice) {
                        case 1:
                        captureSalaries(salaries, MAX_SALARIES);
                        salariesCaptured = 1;
                        break;

                        case 2:
                        displaySalaries(salaries, MAX_SALARIES);
                        break;

                        case 3:
                        printf("Average Salary: $%.2f\n", calculateAverage(salaries, MAX_SALARIES));
                        break;

                        case 4:
                        printf("Highest Salary: $%.2f\n", findHighest(salaries, MAX_SALARIES));
                        break;

                        case 5:
                        printf("Lowest Salary: $%.2f\n", findLowest(salaries, MAX_SALARIES));
                        break;

                        case 6: {
                        float searchKey;
                        printf("Enter salary amount to search: ");
                        scanf("%f", &searchKey);
                        searchSalary(salaries, MAX_SALARIES, searchKey);
                        break;
                        
                        }
                        case 7: break;
                        default: printf("Invalid option!\n");
                    }
                } while (subChoice != 7);
                break;

                case 2: //Department Budgets Sub Menu
                     do {
                        printf("\n--- Department Budgets Menu ---\n");
                        printf("1. Capture Budgets\n");
                        printf("2. Display Budgets\n");
                        printf("3. Calculate Total Budget\n");
                        printf("4. Calculate Average Budget\n");
                        printf("5. Sort Budgets (Lowest to Highest)\n");
                        printf("6. Back to Main Menu\n");
                        printf("Enter choice: ");
                        scanf("%d", &subChoice);

                        if (subChoice >= 2 && subChoice <= 5 && !budgetsCaptured) {
                            printf("Error: Please capture budgets first (Option 1).\n");
                            continue;
                            
                        }
                        switch (subChoice) {
                            case 1:
                            captureBudgets(budgets, MAX_BUDGETS);
                            budgetsCaptured = 1;
                            break;

                            case 2:
                            displayBudgets(budgets, MAX_BUDGETS);
                            break;

                            case 3:
                            printf("Total Department Budget: $%.2f\n", calculateTotalBudget(budgets, MAX_BUDGETS));
                            break;

                            case 4:
                            printf("Average Department Budget: $%.2f\n", calculateAverageBudget(budgets, MAX_BUDGETS));
                            break;

                            case 5:
                            sortBudgets(budgets, MAX_BUDGETS);
                            printf("Budgets sorted succefully.\n");
                            displayBudgets(budgets, MAX_BUDGETS);
                            break;

                            case 6: break;
                            default: printf("Invalid option!\n");
                        }
                    } while (subChoice != 6);
                    break;

                    case 3: //Vehicle Registration Sub-Menu
                         do {
                            printf("\n--- Vehicle Registration Menu ---\n");
                            printf("1. Capture Vehicle Registrations\n");
                            printf("2. Display All Registrations\n");
                            printf("3. Back To the Main Menu\n");
                            printf("Enter Choice: ");
                            scanf("%d", &subChoice);

                            if (subChoice == 2 && !vehiclesCaptured) {
                                printf("Error: Please capture registration numbers first (Option 1).\n");
                                continue;
                            }

                            switch (subChoice) {
                                case 1:
                                captureVehicles(vehicles, MAX_VEHICLES);
                                vehiclesCaptured = 1;
                                break;

                                case 2:
                                displayVehicles(vehicles, MAX_VEHICLES);
                                break;

                                case 3: break;
                                default: printf("Invalid option!\n");

                            }
                        } while (subChoice != 3);
                        break;

                        case 4:
                            printf("Exiting System. Goodbye!\n");
                            break;
                            default:
                            printf("Invalid configuration track choice.\n");

                    }
                } while (mainChoice != 4);
            }
        
            //PART FUNCTION (SALARIES)
            void captureSalaries(float salaries[], int size) {
                int i;
                printf("\nEnter %d employee salaries:\n", size);
                for (i = 0; i < size; i++){
                    printf("Employee %d: ", i + 1);
                    scanf("%f", &salaries[i]);
            }
        }

        void displaySalaries(float salaries[], int size) {
            int i;
            printf("\n--- Employee Salaries List ---\n");
            for (i = 0; i < size; i++) {
                printf("Employee %d: $%.2f\n", i + 1, salaries[i]);
            }
        }

        float calculateAverage(float salaries[], int size) {
            int i;
            float sum = 0;
            for (i = 0; i < size; i++) {
                sum += salaries[i];
            }
            return sum / size;
        }

        float findHighest(float salaries[], int size) {
            int i;
            float max = salaries [0];
            for (i = 1; i < size; i++) {
                if (salaries[i] > max) max = salaries[i];
            }
            return max;
        }

        float findLowest(float salaries[], int size) {
            int i;
            float min = salaries[0];
            for (i = 1; i < size; i++) {
                if (salaries[i] < min) min = salaries[i];
            }
            return min;
        }

        void searchSalary(float salaries[], int size, float key) {
            int found = 0;
            int i;
            for (i; i < size; i++) {
                printf("Salary $%.2f found at employee sequence position %d.\n", key, i + 1);
                found = 1;
            }
        
        if (!found) {
         printf("Salary $%.2f was not found in database regstry.\n", key);
        }
    }

    // Part B FUNCTIONS (Budgets)
    void captureBudgets(float budgets[], int size) {
        int i;
        printf("\nEnter %d Department Budgets:\n", size);
        for (i = 0; i < size; i++) {
            printf("Department %d Budgets: ", i + 1);
            scanf("%f", &budgets[i]);
        }
    }

    void displayBudgets(float budgets[], int size) {
        int i;
        printf("\n--- Department Budgets Overview ---\n");
        for (i = 0; i < size; i++) {
            printf("Department %d: $%.2f\n", i + 1, budgets[i]);
        }
    }
    float calculateTotalBudget(float budgets[], int size) {
        float total = 0;
        int i;
        for (i = 0; i < size; i++){
            total += budgets[i];
        }
        return total;

    }

    float calculateAverageBudget(float budgets[], int size) {
        return calculateTotalBudget(budgets, size) / size;

    }
    void sortBudgets(float budgets[], int size) {
        int i;
        int j;
        for (i = 0; i < size; i++) {
            for (j =0; j < size - 1; j++) {
                if (budgets[j] > budgets[j + 1]){
                    float temp = budgets[j];
                    budgets[j] = budgets[j + 1];
                    budgets[j + 1] = temp;
                }
            }
        }
    }


    void captureVehicles(char regs[][REG_LENGTH], int size) {
        int i;
        printf("\nEnter %d vehicle registrations:\n", size);
        for (i = 0; i < size; i++){
            printf("Vehicle %d: ", i + 1);
            scanf("%19s", regs[i]);
        }
    }
    void displayVehicles(char regs[][REG_LENGTH], int size){
        int i;
        printf("\n--- Vehicle Registrations ---\n");
        for (i = 0; i < size; i++) {
            printf("Vehicle %d: %s\n", i +1, regs[i]);
        }
    }
void searchSupplier(void){

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
}
void backupSupplierName(void){

    char original[90] = "Macaroni Polana";
    char backup[90];

    //use strcpy() to copy original into backup
    //Syntax:strcpy(destination, sources);
    strcpy(backup, original);

    //Display both values if they match
    printf("Original value: %s\n", original);
    printf("Backup value: %s\n", backup);
}
void buildSupplierDescription(void){

    char name[] = "David Luque";
    char town[] = "Salvador";

    //Create a buffer large enough to hold a sentence
    char sentence[200] = "";

    //Build the sentence step by step using strcat()
    //sentence becomes:
    strcat(sentence, name);
    strcat(sentence," operates in");
    strcat(sentence, town);
    strcat(sentence, ".");

    //Print the constructed sentences
    printf("%s\n", sentence);

}

void manageSupplierMenu(void){

    struct Supplier suppliers[MAX_SUPPLIERS];
    int supplierCount = 0;
    int choice;
    int i;
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
                for ( i = 0; i < supplierCount; i++) {
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
                for ( i = 0; i < supplierCount; i++){
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
                for ( i = 0; i < supplierCount; i++) {
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
            break;
        }
     } while (choice != 5);

    }

    void displayMenu() {
    printf("=================================\n");
    printf("MUNICIPAL FINANCIAL MANAGEMENT\n");
    printf("===================================\n");
    printf("1. Calculate VAT\n");
    printf("2. Calculate Salary\n");
    printf("3. Calculate Budget\n");
    printf("4. Exit\n");
    printf("Enter choice:");

}








    