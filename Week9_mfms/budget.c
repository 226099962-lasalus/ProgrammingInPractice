#include <stdio.h>
#include "budget.h"

void manageBudget(void){

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
    while (getchar() != '\n');

    printf("Enter the Payroll: \n");
    scanf("%lf", &payroll);
    while (getchar() != '\n');

    printf("Enter procurement: \n");
    scanf("%lf", &procurement);
    while (getchar() != '\n');

    printf("Enter assets: \n");
    scanf("%lf", &assets);
    while (getchar() != '\n');
    

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

}

float calculateBudget(float revenue, float expenses) {
    float result = revenue - expenses;

    if (result >0){
        printf("SURPLUS\n");
    }
    else if (result < 0){
        printf("DEFICIT\n");
    } else {
        printf("BALANCED\n");
    }
    return result;
}

 