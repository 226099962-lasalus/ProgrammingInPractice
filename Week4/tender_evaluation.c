#include <stdio.h>

int main() {
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
        
    return 0;
}


    