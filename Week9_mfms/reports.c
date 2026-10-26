#include <stdio.h>
#include <string.h>
#include "reports.h"

//=====================================
//WEEK 4 CODE
//=====================================

void manageTenderEvaluation(void) {
    char supplierName[30];
    double supplierPrice;
    double budget;
    int registrationStatus;
    int documentsComplete;
    
    printf("Enter supplier name:\n");
    scanf("%s", &supplierName);

    printf("Enter supplier price:\n");
    scanf("%lf", &supplierPrice);

    printf("Enter the budget:\n");
    scanf("%lf", &budget);

    printf("Enter registration status (y=1, n=0):\n");
    scanf("%d", &registrationStatus );

    printf("Enter documents complete (y=1, n=0):\n");
    scanf(" %d", &documentsComplete);

    if(registrationStatus == 1 && documentsComplete ==1 && supplierPrice >= budget) {
        printf("\nSuppliers:%s\n", supplierName);
        printf("Status: Qualified\n");
        
        printf("Status: Preffered Supplier\n");

    } else { 
        printf("\nSupplier: %s\n", supplierName);
        printf("Status: Disqualified\n");
    
    } 
        
}

//============================================
//WEEK 5 CODE
//============================================
void analyzeEmployeeSalaries(void){
    double salary;
    double totalSalary = 0;
    double highestSalary = 0;
    double lowestSalary = 0;
    double averageSalary = 0;
    

    for (int i = 0; i < 50; i++) {
        printf("Enter the salary of the employee %d:\n",i + 1);
        scanf("%lf", &salary);

        totalSalary += salary;


        if (i == 0) {
            highestSalary = salary;
            lowestSalary = salary;
        }
        if (salary > highestSalary) {
            highestSalary = salary;
        } else if (salary < lowestSalary) {
            lowestSalary = salary;
        }
        
        averageSalary = totalSalary / 50;

        printf("\n--- Salary Analysis ---\n");
        printf("Average salay:%.2lf\n", averageSalary);
        printf("Highest salary:%.2lf\n",highestSalary);
        printf("Lowest salary:%.2lf\n",lowestSalary);
    }
}

    //=======================================
    //WEEEK 7 TASK 1 CODE
    //========================================
   void manageSupplierDetails(void){ 
    char name[50];
    char email[80];
    char phone[20];
    char town[50];

    //standard c fix:
    getchar();

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
}

//========================================
//WEEEK 7 TASK 2 CODE
//========================================
void displaySupplierStringLengths(void){
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
}
    

        
    

