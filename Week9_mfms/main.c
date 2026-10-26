#include <stdio.h>
#include "employee.h"
#include "budget.h"
#include "reports.h"
#include "utilities.h"

void displayWelcome(void){
    printf("========================================================\n");
    printf("Welcome to the Municipal Financial Management System\n");
    printf("====================================================\n\n");
}

int main(){
    displayWelcome();

    printf("=== RUNNING WEEK 8 TASK 2: VAT CALCULATION ===\n");
    float price = 1000.00;
    float VAT = calculateVAT(price);
    printf("Price: %.2f | VAT: %.2f\n\n", price, VAT);

    printf("=== RUNNING WEEK 8 TASK 3: SALARY CALCULATION ===\n");
    float basic = 15000.00;
    float housing = 3000.00;
    float transport = 2000.00;

    float grossSalary = calculateSalary(basic,housing, transport);

    printf("Gross Salary: %.2f\n", grossSalary);

    printf("=== RUNNING WEEK 8 TASK 4: BUDGET STATUS ===\n");
    printf("Testing with 5000 revenue and 4000 expenses:\n");
    calculateBudget(5000.00, 4000.00);

    printf("\nTesting with 3000 revenue and 3500 expenses:\n");
    calculateBudget(3000.00, 3500.00);

    printf("\nTesting with 2000 revenue and 2000 expenses:\n");
    calculateBudget(2000.00, 2000.00);
    printf("\n");

    printf("\n=== RUNNING WEEK 8 TASK 5: INTERACTIVE DASHBOARD ===\n");
    displayMenu();

    printf("=== RUNNING WEEK 8 TASK 6: EMPLOYEE SEARCH ===\n");
    int Employees[] = {1001, 1002, 1003, 1004, 1005};
    int searchID = 0;

    //Ask the User to serach
    printf("Search for employee ID: ");
    scanf("%d", &searchID);
     
    // Call the Functions
    int index= searchEmployee(searchID, Employees, 5);

    //Display the index of the Employee
    printf("Employee can be found at index: %d", index);

    printf("=== RUNNING WEEK 8 TASK 7: SEARCH EMPLOYEE ID ===\n");
    searchEmployeeID();
    displayMenu();

  
    printf("=== RUNNING WEEK 1 CODE ===\n");
    manageMunicipality();

    printf("\n=== RUNNING WEEK 2 CODE ===\n)");
    manageBudget();

    printf("\n=== RUNNING WEEK 3 CODE ===\n");//Lives in employee.c
    manageEmployeeSalary();

    printf("\n=== RUNNING WEEK 4 CODE ===\n");
    manageTenderEvaluation();

    printf("\n=== RUNNING WEEK 5 CODE ===\n");//Lives in report.c
    analyzeEmployeeSalaries();

    printf("\n=== RUNNING WEEK 6 CODE ===\n");
    runWeek6System();

    printf("\n=== RUNNING WEEK 7 TASK 1 ===\n");
    manageSupplierDetails();

    printf("\n=== RUNNING WEEK 7 TASK 2 ===\n");
    displaySupplierStringLengths();

    printf("\n=== RUNNING WEEK 7 TASK 4 ===\n");
    backupSupplierName();

    printf("\n=== RUNNING WEEK 7 TASK 5 ===\n");
    buildSupplierDescription();

    printf("\n=== RUNNING WEEK 7 TASK 6 INTERACTIVE SYSTEM ===\n");
    manageSupplierMenu();

    return 0;
}