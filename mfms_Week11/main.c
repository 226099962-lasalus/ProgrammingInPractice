#include <stdio.h>
#include "records.h"

void addEmployee(Employee arr[], int *count); void displayEmployees(Employee arr[], int count);
void addSupplier(Supplier a[], int *count); void displaySuppliers(Supplier arr[], int count);
void addAsset(Asset arr[], int *count); void displayAssets(Asset arr[], int count);
void addBudget(Budget arr[], int *count); void displayBudgets(Budget arr[], int count);
void addProject(Project arr[], int *count); void displayProjects(Project arr[], int count);
void saveEmployeesBinary(Employee arr[], int count); int loadEmployeesBinary(Employee arr[], int count);

int main() {
    Employee employees[MAX_RECORDS]; int employeeCount = 0;
    Supplier suppliers[MAX_RECORDS]; int supplierCount = 0;
    Asset assets[MAX_RECORDS]; int assetCount = 0;
    Budget budgets[MAX_RECORDS]; int budgetCount = 0;
    Project projects[MAX_RECORDS]; int projectCount = 0;

    employeeCount = loadEmployeesBinary(employees, MAX_RECORDS);;

    int choice;
    do{
        printf("\n===== WWEK 11 MFMS DATABASE =====\n");
        printf("1. Add Employee  2. Display Employees\n");
        printf("3. Add Supplier 4. Display Suppliers\n");
        printf("5. Add Asset 6. Dispaly Assets\n");
        printf("7. Add Budget 8. Display Budgets\n");
        printf("9. Add Project 10. Display Projects\n");
        printf("11. Save and Exit\n");
        printf("Enter your choice:"); scanf("%d", &choice);

        switch (choice){
            case 1: addEmployee(employees, &employeeCount); break;
            case 2: displayEmployees(employees, employeeCount); break;
            case 3: addSupplier(suppliers, &supplierCount); break;
            case 4: displaySuppliers(suppliers, supplierCount); break;
            case 5: addAsset(assets,&assetCount); break;
            case 6: displayAssets(assets, assetCount); break;
            case 7: addBudget(budgets, &budgetCount); break;
            case 8: displayBudgets(budgets, budgetCount); break;
            case 9: addProject(projects, &projectCount); break;
            case 10: displayProjects(projects, projectCount); break;
            case 11: saveEmployeesBinary(employees, employeeCount); printf("Data saved. Exiting...\n"); break;
            default: printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 11);
    return 0;
}