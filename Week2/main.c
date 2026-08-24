#include <stdio.h> 

int main() { 
    double revenue; 
    double expenses; 
    double balance;
    int departments; 
    double payroll; 
    double procurement; 
    double assets; 
    

    printf("BASIC MUNICIPAL FINANCIAL\n"); 
    printf("---------------------------\n");
    printf("Enter department: \n");
    scanf("%d", &departments);
    printf("Enter the Payroll: \n");
    scanf("%lf", &payroll);
    printf("Enter procurement: \n");
    scanf("%lf", &procurement);
    printf("Enter assets: \n");
    scanf("%lf", &assets);
    

    printf("\nMUNICIPAL BUDGET CALCULATOR\n"); 
    printf("---------------------------\n"); 
    printf("Enter total revenue: "); 
    scanf("%lf", &revenue); 
    printf("Enter total expenses: "); 
    scanf("%lf", &expenses); 
    balance = revenue - expenses; 
    
    printf("\nDISPLAY\n"); 
    printf("---------------------------\n");
    printf("Department: %d\n", departments);
    printf("Payroll: %.2f\n", payroll);
    printf("Procurement: %.2f\n", procurement);
    printf("Assets: %.2f\n", assets);

    printf("\nRevenue: %.2f\n", revenue); 
    printf("Expenses: %.2f\n", expenses); 
        if (balance > 0) { 
        printf("Surplus: %.2f\n", balance); 
        } 
        else if (balance < 0) { 
        printf("Deficit: %.2f\n", -balance); 
        } 
        else { 
        printf("The budget is balanced.\n"); 
        } 

    
    return 0; 
} 